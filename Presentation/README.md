# Addendums and Notes

Here is a list of addendums or notes to clarify or correct things said or written in the presentation. The timestamps are relevant to [this upload of the video](https://www.youtube.com/watch?v=ZgPWE0Wkg7g).

* 00:05:23 - **Note:** This claim is directly from the Nintendo 64 Programming Manual. Mazamars312 got in touch (he's working on an N64 FPGA reimplementation) and he's not super convinced about this. After talking a bit with Bigbass, this is the conclusion that was reached: The bus that sits between the CPU and RCP is 32-Bits wide (System Address-Data Bus). When cache misses ocurr, a 128-Bit transfer is always used regardless of what the size of the data was. An uncached 8/16/24/32-Bit read/write will take the same amount of time, but a 64-Bit one will take 1 extra cycle, because data is moved 32-bits at a time. With all of these transfers, there is 1 cycle used to tell the RCP "Hey! Here's an address, and a command." You can think of this as "overhead" like in software. Because the 64-bit transfer only needs to specify this overhead once for 64-bits, it is technically faster than 8/16/24/32-bit transfers, given the same amount of data. So in the end, the truth is that whether its faster or not depends on *how* the CPU communicates with the data! If there is any noticable difference in performance between the different methods, that has yet to be benchmarked. If it is done in the future, I will update this note.
* 00:07:14 - **Clarification:** When I mention that there's no such thing as vertex or fragment shaders on the RSP, I mean it more in a "traditional sense". You can make the argument that the RSP/CPU can perform the task of a vertex shader via Microcode, and that the RDP/CPU can perform the tasks of a fragment shader. But these were not really available to developers (because of the lack of RSP documentation) and even then, you wouldn't write microcode specifically to perform a small task (such as skinning) like you would in a regular shader program (by binding multiple shaders between draw calls). 
* 00:08:00 - **Note:** As Fazana mentioned to me a bit later, as well as Mazamars312, one of the big reasons for the RDP being fillrate limited is due to the RAM's high access latency. The Chinese N64 (iQue) has faster RAM and this has a significant improvement on performance.
* 00:11:18 - **Addendum:** I meant to say "I only know of 2 commercial N64 games that are 64MB in size". There's actually 3 games, the third is Pokemon Stadium 2.
* 00:11:38 - **Note:** If you're seeing this message, there are still no physical tests on this as of yet.
* 00:12:00 - **Heckling:** A member of the audience said "That's cheating".
* 00:12:03 - **Note:** NES games do as well.
* 00:14:04 - **Fun Fact:** Turok developers Acclaim used V64's for the development of Turok 2 and 3.
* 00:15:54 - **Note:** If you're seeing this message, the 3D microcode has not yet been merged into Libdragon.
* 00:16:55 - **Note:** If you're seeing this message, the 64Drive has not yet resumed production.
* 00:19:05 - **Heckling:** A member of the audience asked "Not even today?".
* 00:21:16 - **Heckling:** A member of the audience asked about the legalities of the Super Mario 64 reverse engineering project.
* 00:25:09 - **Note:** If you're seeing this message, the kernel rewrite PR has not yet been merged.
* 00:28:28 - **Heckling:** A member of the audience asked "Has someone ported Bad Apple to the N64 yet?".
* 00:31:51 - **Clarfication:** I called it bootcode for simplifcation reasons, but it's a bit more complicated than that... The community is trying to step away from that terminology.
* 00:38:34 - **Clarfication:** The texture memory isn't for the entire scene (like in the PS1), you can swap out textures as you're rendering triangles. The problem is that the texture cache is super small so its hard to get good looking textures without increasing your poly count.
* 00:38:44 - **Addendum:** I meant "32-Bit color image" (I was thinking 8 bits per component (R, G, B, A) but accidentally blurted out "8-Bit color").
* 00:38:52 - **Heckling:** Member of the audience asked "Why did they make it so small?".
* 00:42:32 - **Note:** The model appears brighter now because the texture color is being added to its vertex color. Ideally I would have multiplied them all together (requiring 2 passes), but this swap was needed to show the noise effect instead being done in a single pass.
* 00:51:34 - **Heckling:** Member of the audience said "Perfect Dark uses MP3 as well".
* 00:57:49 - **Note:** Bigbass got in touch and added the following interesting details. The Oman archives are, regrettably, firmly ingrained into homebrew development and documentation. Most memory maps of the console available online were very likely sourced from Oman, and quite a few wiki's/GitHub docs that appear nearly identical to the ones from the archives, and since then a lot of derivatives have been made. The memory map in the N64brew wiki should be mostly clean as it was written from the ground up by Bigbass.
* 00:58:53 - **Heckling:** A member of the audience asked "What sort of fighting?".
* 00:59:15 - **Heckling:** A member of the audience asked "What about high level emulation? Did that die off?".
* 00:59:25 - **Addendum:** It did not use Oman details (it was released before). It was discontinued because Nintendo put a stop to it as the console was still being commercially sold.
* 00:59:40 - **Addendum:** The timeline for alt-libn64 is tricky and the slide is very much wrong (I don't remember how I got 2008). It was already around in before it was [checked into n64dev in 2005](https://sourceforge.net/p/n64dev/code/13/), which itself was based on mikeryan's [libn64](https://github.com/mikeryan/n64dev/tree/master/lib/libn64) (hence the alt in the name). The original "open source C++ for N64" was published in 1999 (which is where alt-libn64's linker script came from). Thank you very much to hcs for pointing all of this out :smiley:  
* 00:59:58 - **Addendum:** alt-libn64 merged with Libdragon in 2010, the slides are correct, I just had a verbal slip up. 
* 01:04:04 - **Note:** If you're seeing this message, there is still no single pitstop for homebrew releases.
* 01:04:20 - **Addendum:** I meant to say "NES World", not "NES Dev".
