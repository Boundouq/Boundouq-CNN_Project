#ifndef _IMG0_H_ 
#define _IMG0_H_ 
#include "KERNEL.h" 
static d_type norm_image[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH] ={{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1.272943387167822,1.2526919884638805,1.5564629690230007,1.5362115703190593,1.5969657664308834,1.5969657664308834,1.6172171651348246,1.637468563838766,1.5564629690230007,1.39445177939147,1.2324405897599393,1.3134461845757046,1.4957087729111767,1.151434994944174,0.42238464160228584,-0.6104366922987223,-0.6711908884105463,-0.18515731951595427,-0.0028947311804822487,-0.10415172470018894,0.11861366104316577,0.5033902364180511,0.5641444325298751,0.4831388377141098,0},{0,1.4147031780954114,1.3539489819835873,1.5564629690230007,1.6172171651348246,1.637468563838766,1.637468563838766,1.637468563838766,1.6577199625427073,1.5564629690230007,1.5159601716151179,1.2121891910559979,1.0299266027205258,1.6577199625427073,1.5362115703190593,1.1311835962402326,0.3413790467865205,-0.06364892729230626,0.5236416351219925,0.6451500273456405,0.2603734519707551,0.3616304454904618,0.42238464160228584,0.4628874390101685,0.44263604030622716,0},{0,1.5362115703190593,1.5159601716151179,1.5564629690230007,1.5362115703190593,1.7184741586545313,1.637468563838766,1.758976956062414,1.7184741586545313,1.7792283547663554,1.7792283547663554,1.4957087729111767,1.09068079883235,1.3539489819835873,1.4957087729111767,1.4957087729111767,1.3742003806875287,1.0299266027205258,1.0096752040165846,0.9894238053126432,0.44263604030622716,0.32112764808257915,0.3616304454904618,0.19961925585893112,0.2401220532668138,0},{0,1.4957087729111767,1.5362115703190593,1.5362115703190593,1.7184741586545313,1.7994797534702967,1.69822275995059,1.9007367469900034,1.9209881456939446,1.819731152174238,1.7387255573584726,1.7184741586545313,1.3539489819835873,1.3134461845757046,1.4754573742072352,1.576714367726942,1.5564629690230007,1.4349545767993526,0.7666584195692885,0.8881668117929366,0.4628874390101685,0.15911645845104844,0.21987065456287244,-0.06364892729230626,0.07811086363528309,0},{0,1.4754573742072352,1.4957087729111767,1.5969657664308834,1.637468563838766,1.7792283547663554,1.758976956062414,1.758976956062414,1.8602339495821207,1.7792283547663554,1.5362115703190593,1.4754573742072352,1.2324405897599393,1.1109321975362911,1.0501780014244673,1.3539489819835873,1.5564629690230007,1.69822275995059,1.1311835962402326,1.3539489819835873,0.6856528247535232,0.09836226233922443,0.09836226233922443,0.2603734519707551,0.40213324289834446,0},{0,1.5969657664308834,1.5969657664308834,1.69822275995059,1.4349545767993526,1.5564629690230007,1.7994797534702967,2.00199374050971,1.9007367469900034,1.5159601716151179,1.3742003806875287,1.333697583279646,1.4147031780954114,1.1716863936481152,0.8274126156811126,0.9489210079047605,1.4147031780954114,1.6172171651348246,1.2324405897599393,1.455205975503294,0.8476640143850539,-0.0839003259962476,0.09836226233922443,0.3616304454904618,0.40213324289834446,0},{0,1.5159601716151179,1.7184741586545313,1.7184741586545313,1.758976956062414,1.758976956062414,1.9209881456939446,1.8602339495821207,1.5564629690230007,1.1311835962402326,1.1919377923520567,1.3742003806875287,1.7792283547663554,1.5159601716151179,0.9691724066087019,0.7059042234574645,1.0501780014244673,1.2324405897599393,1.151434994944174,1.1311835962402326,0.5033902364180511,-0.5091796987790157,0.05785946493134176,0.11861366104316577,0.05785946493134176,0},{0,0.9691724066087019,1.576714367726942,1.8602339495821207,1.8399825508781793,1.7994797534702967,1.5564629690230007,1.4754573742072352,1.5564629690230007,1.7184741586545313,1.5159601716151179,0.9894238053126432,1.2931947858717632,1.5564629690230007,1.1109321975362911,0.6856528247535232,1.0096752040165846,1.0704294001284085,1.0096752040165846,0.6451500273456405,-0.38767130655536763,-0.6711908884105463,-0.043397528588364924,0.07811086363528309,0.05785946493134176,0},{0,1.7994797534702967,2.0829993353254754,1.819731152174238,1.6779713612466487,1.6172171651348246,1.151434994944174,1.333697583279646,1.7994797534702967,2.0424965379175926,1.5159601716151179,1.0704294001284085,0.3008762493786378,-0.0839003259962476,0.5641444325298751,0.42238464160228584,0.7666584195692885,1.0501780014244673,0.7464070208653472,0.3008762493786378,-0.4281741039632503,-0.7116936858184291,-0.529431097482957,-0.20540871821989562,-0.023146129884423584,0},{0,2.0424965379175926,1.941239544397886,1.7994797534702967,1.7792283547663554,1.333697583279646,1.0096752040165846,1.637468563838766,1.9209881456939446,1.7387255573584726,1.39445177939147,1.39445177939147,1.1109321975362911,0.15911645845104844,0.9489210079047605,0.9286696092008192,0.7869098182732298,1.151434994944174,0.5641444325298751,0.017356667523459088,-0.5496824961868984,-0.8534534767460183,-0.7116936858184291,-0.3269171104435436,-0.06364892729230626,0},{0,1.9614909431018273,1.8399825508781793,1.637468563838766,1.7792283547663554,1.4957087729111767,1.4957087729111767,2.00199374050971,1.9007367469900034,1.455205975503294,1.333697583279646,1.637468563838766,1.7994797534702967,1.5159601716151179,1.7792283547663554,1.4957087729111767,1.6172171651348246,1.2324405897599393,0.5843958312338166,0.11861366104316577,-0.5496824961868984,-0.650939489706605,-0.6104366922987223,-0.24591151562777827,0.1793678571549898,0},{0,2.00199374050971,1.9614909431018273,1.637468563838766,1.39445177939147,1.637468563838766,1.8602339495821207,2.103250734029417,2.1437535314372993,2.245010524957006,1.8602339495821207,1.9614909431018273,2.0424965379175926,1.880485348286062,1.7792283547663554,1.7994797534702967,1.8399825508781793,1.39445177939147,1.09068079883235,0.28062485067469645,-0.38767130655536763,-0.590185293594781,-0.7116936858184291,-0.06364892729230626,0.7261556221614058,0},{0,1.8399825508781793,1.7792283547663554,1.5564629690230007,1.0299266027205258,1.455205975503294,2.0222451392136516,2.2652619236609475,2.00199374050971,2.2652619236609475,1.9209881456939446,1.8399825508781793,2.103250734029417,1.8602339495821207,1.758976956062414,1.7184741586545313,1.819731152174238,1.8399825508781793,1.3539489819835873,0.017356667523459088,-0.590185293594781,-1.0559674637854317,-0.8737048754499597,0.1388650597471071,0.8881668117929366,0},{0,1.819731152174238,1.880485348286062,1.8602339495821207,0.9286696092008192,1.151434994944174,2.245010524957006,1.4147031780954114,1.0096752040165846,1.880485348286062,1.9209881456939446,1.5969657664308834,1.39445177939147,1.4147031780954114,1.6577199625427073,1.4349545767993526,1.3742003806875287,1.1109321975362911,0.3616304454904618,-0.650939489706605,-1.136973058601197,-1.319235646936669,-1.015464666377549,0.09836226233922443,0.8881668117929366,0},{0,1.9614909431018273,1.8399825508781793,1.758976956062414,0.7666584195692885,0.3413790467865205,2.062747936621534,1.1716863936481152,1.4147031780954114,2.245010524957006,1.6779713612466487,0.5843958312338166,0.8881668117929366,0.5033902364180511,0.9691724066087019,0.5641444325298751,-0.043397528588364924,-0.347168509147485,-0.8737048754499597,-1.0559674637854317,-0.9749618689696664,-1.136973058601197,-0.7116936858184291,0.11861366104316577,1.1716863936481152,0},{0,1.8399825508781793,1.8399825508781793,1.8399825508781793,1.0704294001284085,-0.7926992806341944,1.09068079883235,1.7994797534702967,1.7387255573584726,1.941239544397886,1.333697583279646,0.9084182104968779,2.1640049301412407,1.576714367726942,0.7666584195692885,0.03760806622740042,-0.772447881930253,-0.893956274153901,-0.9749618689696664,-0.5699338948908397,-0.38767130655536763,-0.893956274153901,-0.5091796987790157,0.21987065456287244,1.2324405897599393,0},{0,1.758976956062414,1.7994797534702967,1.758976956062414,1.1109321975362911,-1.3597384443445517,-1.015464666377549,0.5438930338259338,0.9489210079047605,1.1311835962402326,0.8274126156811126,0.8274126156811126,1.880485348286062,2.123502132733358,1.151434994944174,-0.043397528588364924,-0.7521964832263117,-0.529431097482957,-0.529431097482957,-0.347168509147485,-0.24591151562777827,-0.833202078042077,-0.7521964832263117,0.15911645845104844,1.3539489819835873,0},{0,1.6577199625427073,1.5969657664308834,1.2931947858717632,0.5033902364180511,-1.2787328495287864,-1.4204926404563758,-1.197727254713021,-0.893956274153901,-0.4281741039632503,-0.0028947311804822487,0.03760806622740042,0.6248986286416992,0.9084182104968779,0.4831388377141098,-0.0839003259962476,-0.893956274153901,-0.9547104702657251,-0.9749618689696664,-0.7926992806341944,-0.28641431303566095,-0.4281741039632503,-0.44842550266719167,0.05785946493134176,1.09068079883235,0},{0,1.4147031780954114,1.3742003806875287,1.0096752040165846,0.11861366104316577,-0.40792270525930896,-0.10415172470018894,-0.6711908884105463,-1.0762188624893732,-1.0559674637854317,-0.5699338948908397,-0.14465452210807161,0.42238464160228584,-0.18515731951595427,-0.893956274153901,-0.8737048754499597,-1.1774758560090797,-1.2989842482327278,-1.319235646936669,-1.4002412417524344,-0.893956274153901,-0.347168509147485,-0.2661629143317196,-0.043397528588364924,0.40213324289834446,0},{0,1.151434994944174,1.2324405897599393,0.9894238053126432,0.7666584195692885,0.8881668117929366,0.38188184419440313,0.05785946493134176,0.15911645845104844,0.21987065456287244,0.19961925585893112,0.5236416351219925,0.07811086363528309,-1.0559674637854317,-1.663509424903672,-1.6837608236076131,-1.623006627495789,-1.5217496339760825,-1.440744039160317,-1.7242636210154958,-1.623006627495789,-1.136973058601197,-0.6914422871144876,-0.06364892729230626,-0.0028947311804822487,0},{0,1.0501780014244673,0.8274126156811126,1.455205975503294,1.880485348286062,1.4754573742072352,0.3413790467865205,0.6856528247535232,0.7464070208653472,0.9489210079047605,0.8476640143850539,0.5641444325298751,0.03760806622740042,-0.6914422871144876,-1.2584814508248452,-1.3597384443445517,-1.501498235272141,-1.5217496339760825,-1.663509424903672,-1.805269215831261,-1.7040122223115546,-1.6027552287918478,-0.6711908884105463,-0.043397528588364924,-0.4281741039632503,0},{0,1.1919377923520567,0.7464070208653472,0.9894238053126432,1.576714367726942,1.7184741586545313,0.9691724066087019,1.4147031780954114,1.0501780014244673,0.5641444325298751,0.8071612169771712,0.8679154130889952,0.5236416351219925,0.07811086363528309,-0.44842550266719167,-0.7319450845223704,-1.136973058601197,-1.3394870456406105,-1.5217496339760825,-1.663509424903672,-1.4812468365681999,-1.3799898430484931,-0.7521964832263117,-0.5496824961868984,-0.9952132676736077,0},{0,1.576714367726942,1.39445177939147,0.8274126156811126,0.42238464160228584,1.455205975503294,0.8881668117929366,0.38188184419440313,0.6248986286416992,0.4831388377141098,1.151434994944174,1.3539489819835873,0.9286696092008192,0.5033902364180511,0.11861366104316577,-0.16490592081201294,-0.4281741039632503,-0.468676901371133,-0.6711908884105463,-0.8737048754499597,-0.650939489706605,-0.590185293594781,-0.6914422871144876,-0.6914422871144876,-0.529431097482957,0},{0,1.637468563838766,1.4349545767993526,1.09068079883235,0.4831388377141098,0.8071612169771712,1.151434994944174,0.32112764808257915,0.5438930338259338,0.6451500273456405,1.1919377923520567,1.39445177939147,1.272943387167822,0.5641444325298751,0.40213324289834446,0.4831388377141098,0.42238464160228584,0.2603734519707551,0.09836226233922443,0.11861366104316577,0.40213324289834446,0.3413790467865205,0.11861366104316577,0.09836226233922443,0.19961925585893112,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0.19961925585893112,-0.0028947311804822487,0.3008762493786378,0.3008762493786378,0.2401220532668138,0.2401220532668138,0.2603734519707551,0.28062485067469645,0.1793678571549898,-0.0028947311804822487,-0.20540871821989562,-0.14465452210807161,-0.10415172470018894,-0.20540871821989562,-0.4281741039632503,-1.1167216598972558,-1.2179786534169623,-0.9547104702657251,-0.8737048754499597,-1.0762188624893732,-0.9344590715617838,-0.650939489706605,-0.5699338948908397,-0.529431097482957,0},{0,0.38188184419440313,0.1388650597471071,0.28062485067469645,0.3413790467865205,0.32112764808257915,0.3616304454904618,0.3413790467865205,0.28062485067469645,0.19961925585893112,0.11861366104316577,-0.18515731951595427,-0.3066657117396023,0.1388650597471071,0.09836226233922443,0.07811086363528309,-0.40792270525930896,-0.833202078042077,-0.44842550266719167,-0.347168509147485,-0.772447881930253,-0.7521964832263117,-0.7319450845223704,-0.650939489706605,-0.590185293594781,0},{0,0.4628874390101685,0.3616304454904618,0.32112764808257915,0.2401220532668138,0.44263604030622716,0.4831388377141098,0.5033902364180511,0.2603734519707551,0.32112764808257915,0.28062485067469645,0.05785946493134176,-0.14465452210807161,0.017356667523459088,0.03760806622740042,0.19961925585893112,0.21987065456287244,-0.14465452210807161,-0.24591151562777827,-0.16490592081201294,-0.650939489706605,-0.7521964832263117,-0.7116936858184291,-0.8737048754499597,-0.8129506793381357,0},{0,0.42238464160228584,0.38188184419440313,0.3008762493786378,0.44263604030622716,0.5843958312338166,0.4628874390101685,0.5033902364180511,0.32112764808257915,0.32112764808257915,0.19961925585893112,0.1793678571549898,0.017356667523459088,0.03760806622740042,0.09836226233922443,0.19961925585893112,0.1388650597471071,0.05785946493134176,-0.4889283000750743,-0.24591151562777827,-0.5496824961868984,-0.8129506793381357,-0.7926992806341944,-1.0762188624893732,-0.9344590715617838,0},{0,0.40213324289834446,0.3413790467865205,0.3616304454904618,0.40213324289834446,0.5843958312338166,0.4628874390101685,0.2401220532668138,0.19961925585893112,0.32112764808257915,0.07811086363528309,-0.043397528588364924,-0.10415172470018894,-0.10415172470018894,-0.20540871821989562,-0.043397528588364924,0.017356667523459088,0.19961925585893112,-0.0839003259962476,0.3008762493786378,-0.20540871821989562,-0.7521964832263117,-0.833202078042077,-0.7116936858184291,-0.5699338948908397,0},{0,0.5033902364180511,0.4628874390101685,0.4831388377141098,0.2401220532668138,0.38188184419440313,0.4831388377141098,0.5236416351219925,0.44263604030622716,0.38188184419440313,0.19961925585893112,0.03760806622740042,0.2401220532668138,0.11861366104316577,-0.28641431303566095,-0.347168509147485,-0.06364892729230626,0.1388650597471071,0.017356667523459088,0.4628874390101685,0.07811086363528309,-0.772447881930253,-0.7521964832263117,-0.5699338948908397,-0.529431097482957,0},{0,0.42238464160228584,0.5641444325298751,0.5033902364180511,0.5438930338259338,0.5641444325298751,0.6046472299377579,0.5843958312338166,0.4831388377141098,0.44263604030622716,0.40213324289834446,0.42238464160228584,0.9084182104968779,0.6451500273456405,-0.0028947311804822487,-0.40792270525930896,-0.22566011692383695,-0.0839003259962476,-0.043397528588364924,0.1793678571549898,-0.16490592081201294,-1.0762188624893732,-0.7521964832263117,-0.772447881930253,-0.8129506793381357,0},{0,-0.12440312340413026,0.4628874390101685,0.6654014260495819,0.6451500273456405,0.6046472299377579,0.32112764808257915,0.42238464160228584,0.8274126156811126,1.3539489819835873,1.0501780014244673,0.3413790467865205,0.6856528247535232,0.8476640143850539,0.21987065456287244,-0.2661629143317196,-0.043397528588364924,-0.06364892729230626,-0.14465452210807161,-0.2661629143317196,-1.015464666377549,-1.1572244573051385,-0.7926992806341944,-0.7521964832263117,-0.7926992806341944,0},{0,0.8274126156811126,1.1109321975362911,0.8274126156811126,0.6654014260495819,0.5641444325298751,0.15911645845104844,0.4831388377141098,1.151434994944174,1.5969657664308834,0.9691724066087019,0.40213324289834446,-0.3269171104435436,-0.7116936858184291,-0.16490592081201294,-0.3269171104435436,0.017356667523459088,0.2401220532668138,-0.14465452210807161,-0.44842550266719167,-1.015464666377549,-1.1774758560090797,-1.0559674637854317,-0.893956274153901,-0.8534534767460183,0},{0,1.151434994944174,1.0299266027205258,0.8881668117929366,0.8476640143850539,0.40213324289834446,0.1388650597471071,0.8881668117929366,1.2324405897599393,1.0501780014244673,0.6046472299377579,0.5843958312338166,0.40213324289834446,-0.44842550266719167,0.3413790467865205,0.32112764808257915,0.19961925585893112,0.4831388377141098,-0.18515731951595427,-0.6306880910026637,-1.0964702611933144,-1.2989842482327278,-1.136973058601197,-0.9749618689696664,-0.893956274153901,0},{0,1.0299266027205258,0.9286696092008192,0.7059042234574645,0.8881668117929366,0.6451500273456405,0.6654014260495819,1.2526919884638805,1.151434994944174,0.5236416351219925,0.3008762493786378,0.6856528247535232,1.0501780014244673,0.9286696092008192,1.2324405897599393,0.9489210079047605,1.0704294001284085,0.6046472299377579,-0.12440312340413026,-0.4889283000750743,-1.0559674637854317,-1.0559674637854317,-1.0357160650814905,-0.8737048754499597,-0.6306880910026637,0},{0,1.0704294001284085,1.0299266027205258,0.7059042234574645,0.5236416351219925,0.8881668117929366,1.1311835962402326,1.3742003806875287,1.333697583279646,1.1311835962402326,0.6654014260495819,0.8881668117929366,1.2324405897599393,1.272943387167822,1.1919377923520567,1.2121891910559979,1.2526919884638805,0.7666584195692885,0.42238464160228584,-0.3066657117396023,-0.8534534767460183,-0.9749618689696664,-1.136973058601197,-0.7116936858184291,-0.0839003259962476,0},{0,0.9084182104968779,0.8476640143850539,0.6046472299377579,0.1793678571549898,0.8071612169771712,1.333697583279646,1.5362115703190593,1.1716863936481152,1.1919377923520567,0.7059042234574645,0.7059042234574645,1.2121891910559979,1.1109321975362911,0.9894238053126432,0.9691724066087019,1.0704294001284085,1.1109321975362911,0.7261556221614058,-0.529431097482957,-1.015464666377549,-1.4002412417524344,-1.2989842482327278,-0.4889283000750743,0.07811086363528309,0},{0,0.8881668117929366,0.9691724066087019,0.9286696092008192,0.11861366104316577,0.5843958312338166,1.6172171651348246,0.6856528247535232,0.1793678571549898,0.9286696092008192,0.8071612169771712,0.4628874390101685,0.44263604030622716,0.5236416351219925,0.7261556221614058,0.5033902364180511,0.44263604030622716,0.3008762493786378,-0.22566011692383695,-1.1572244573051385,-1.5217496339760825,-1.623006627495789,-1.4204926404563758,-0.529431097482957,0.05785946493134176,0},{0,1.151434994944174,1.09068079883235,0.9286696092008192,-0.023146129884423584,-0.14465452210807161,1.4349545767993526,0.3413790467865205,0.4628874390101685,1.333697583279646,0.6451500273456405,-0.4889283000750743,-0.023146129884423584,-0.468676901371133,-0.043397528588364924,-0.28641431303566095,-0.7116936858184291,-0.9142076728578423,-1.4609954378642585,-1.663509424903672,-1.4609954378642585,-1.4812468365681999,-1.197727254713021,-0.6104366922987223,0.3616304454904618,0},{0,1.151434994944174,1.2931947858717632,1.1311835962402326,0.32112764808257915,-1.2179786534169623,0.5033902364180511,0.9894238053126432,0.7666584195692885,1.0096752040165846,0.28062485067469645,-0.24591151562777827,1.151434994944174,0.42238464160228584,-0.38767130655536763,-0.772447881930253,-1.2179786534169623,-1.2179786534169623,-1.5217496339760825,-1.319235646936669,-1.0762188624893732,-1.3799898430484931,-1.0964702611933144,-0.6104366922987223,0.42238464160228584,0},{0,1.0299266027205258,1.272943387167822,1.0704294001284085,0.3616304454904618,-1.7445150197194372,-1.4204926404563758,0.017356667523459088,0.3413790467865205,0.32112764808257915,-0.2661629143317196,-0.529431097482957,0.5033902364180511,0.7059042234574645,-0.16490592081201294,-1.0559674637854317,-1.4609954378642585,-1.015464666377549,-0.9952132676736077,-1.015464666377549,-0.9952132676736077,-1.501498235272141,-1.4002412417524344,-0.6711908884105463,0.5236416351219925,0},{0,0.8476640143850539,1.0299266027205258,0.6046472299377579,-0.24591151562777827,-1.7040122223115546,-1.7850178171273199,-1.5622524313839652,-1.2584814508248452,-0.9142076728578423,-0.8534534767460183,-1.1774758560090797,-0.7521964832263117,-0.3269171104435436,-0.5496824961868984,-0.9142076728578423,-1.4812468365681999,-1.3597384443445517,-1.2989842482327278,-1.319235646936669,-0.9749618689696664,-1.197727254713021,-1.136973058601197,-0.7521964832263117,0.2603734519707551,0},{0,0.4831388377141098,0.7666584195692885,0.32112764808257915,-0.6711908884105463,-1.0559674637854317,-0.6711908884105463,-1.197727254713021,-1.5420010326800238,-1.4609954378642585,-1.2382300521209038,-1.1167216598972558,-0.6104366922987223,-0.9142076728578423,-1.3799898430484931,-1.2382300521209038,-1.4204926404563758,-1.501498235272141,-1.5622524313839652,-1.7040122223115546,-1.3799898430484931,-1.015464666377549,-0.9749618689696664,-0.833202078042077,-0.4281741039632503,0},{0,0.11861366104316577,0.6046472299377579,0.32112764808257915,-0.10415172470018894,-0.043397528588364924,-0.5699338948908397,-0.9142076728578423,-0.7926992806341944,-0.6711908884105463,-0.7521964832263117,-0.4889283000750743,-0.7926992806341944,-1.4812468365681999,-1.805269215831261,-1.8255206145352025,-1.7242636210154958,-1.663509424903672,-1.623006627495789,-1.7850178171273199,-1.7647664184233784,-1.5420010326800238,-1.3799898430484931,-0.833202078042077,-0.8129506793381357,0},{0,-0.06364892729230626,0.09836226233922443,0.7666584195692885,0.9691724066087019,0.3616304454904618,-0.833202078042077,-0.6104366922987223,-0.650939489706605,-0.5091796987790157,-0.6104366922987223,-0.7319450845223704,-0.9344590715617838,-1.1774758560090797,-1.501498235272141,-1.623006627495789,-1.7445150197194372,-1.7647664184233784,-1.8255206145352025,-1.7445150197194372,-1.6432580261997305,-1.7647664184233784,-1.2787328495287864,-0.7521964832263117,-1.2179786534169623,0},{0,-0.043397528588364924,-0.2661629143317196,0.11861366104316577,0.7059042234574645,0.8679154130889952,0.15911645845104844,0.5033902364180511,-0.043397528588364924,-0.6306880910026637,-0.529431097482957,-0.4281741039632503,-0.529431097482957,-0.7521964832263117,-1.136973058601197,-1.2382300521209038,-1.440744039160317,-1.5622524313839652,-1.7242636210154958,-1.7850178171273199,-1.6027552287918478,-1.6027552287918478,-1.1572244573051385,-1.0357160650814905,-1.6027552287918478,0},{0,0.28062485067469645,0.2401220532668138,-0.16490592081201294,-0.468676901371133,0.6654014260495819,0.21987065456287244,-0.38767130655536763,-0.3674199078514263,-0.5699338948908397,-0.0839003259962476,-0.0028947311804822487,-0.3066657117396023,-0.5496824961868984,-0.772447881930253,-0.8737048754499597,-0.9749618689696664,-0.9344590715617838,-1.136973058601197,-1.3597384443445517,-1.136973058601197,-1.0762188624893732,-1.197727254713021,-1.2584814508248452,-1.197727254713021,0},{0,0.28062485067469645,0.19961925585893112,-0.023146129884423584,-0.5496824961868984,-0.14465452210807161,0.32112764808257915,-0.6104366922987223,-0.590185293594781,-0.5091796987790157,-0.10415172470018894,-0.06364892729230626,-0.22566011692383695,-0.6104366922987223,-0.5699338948908397,-0.468676901371133,-0.5091796987790157,-0.6711908884105463,-0.7926992806341944,-0.772447881930253,-0.4889283000750743,-0.529431097482957,-0.7116936858184291,-0.7319450845223704,-0.6914422871144876,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,-0.529431097482957,-0.7319450845223704,-0.468676901371133,-0.4889283000750743,-0.5091796987790157,-0.5091796987790157,-0.4889283000750743,-0.4889283000750743,-0.650939489706605,-0.8129506793381357,-0.9344590715617838,-0.8129506793381357,-0.8129506793381357,-0.9547104702657251,-0.9749618689696664,-1.4002412417524344,-1.3799898430484931,-1.1774758560090797,-1.0762188624893732,-1.2179786534169623,-1.0762188624893732,-0.8129506793381357,-0.772447881930253,-0.772447881930253,0},{0,-0.3674199078514263,-0.590185293594781,-0.468676901371133,-0.468676901371133,-0.468676901371133,-0.3674199078514263,-0.4281741039632503,-0.5699338948908397,-0.6306880910026637,-0.650939489706605,-0.9344590715617838,-1.015464666377549,-0.650939489706605,-0.6914422871144876,-0.5496824961868984,-0.8534534767460183,-1.136973058601197,-0.7521964832263117,-0.6711908884105463,-0.9952132676736077,-0.8737048754499597,-0.9142076728578423,-0.8737048754499597,-0.833202078042077,0},{0,-0.3269171104435436,-0.38767130655536763,-0.3674199078514263,-0.4889283000750743,-0.3674199078514263,-0.24591151562777827,-0.28641431303566095,-0.6711908884105463,-0.468676901371133,-0.40792270525930896,-0.650939489706605,-0.9344590715617838,-0.7926992806341944,-0.7116936858184291,-0.5091796987790157,-0.44842550266719167,-0.6914422871144876,-0.7116936858184291,-0.6914422871144876,-1.0559674637854317,-0.9344590715617838,-0.9142076728578423,-1.0964702611933144,-1.0357160650814905,0},{0,-0.3674199078514263,-0.3674199078514263,-0.40792270525930896,-0.3066657117396023,-0.24591151562777827,-0.2661629143317196,-0.2661629143317196,-0.5496824961868984,-0.44842550266719167,-0.468676901371133,-0.5091796987790157,-0.7319450845223704,-0.6711908884105463,-0.529431097482957,-0.468676901371133,-0.529431097482957,-0.5699338948908397,-1.0559674637854317,-0.8737048754499597,-1.0559674637854317,-1.1167216598972558,-1.015464666377549,-1.2989842482327278,-1.1572244573051385,0},{0,-0.3269171104435436,-0.40792270525930896,-0.38767130655536763,-0.38767130655536763,-0.22566011692383695,-0.3269171104435436,-0.529431097482957,-0.590185293594781,-0.3674199078514263,-0.5496824961868984,-0.650939489706605,-0.772447881930253,-0.650939489706605,-0.6914422871144876,-0.590185293594781,-0.590185293594781,-0.40792270525930896,-0.7116936858184291,-0.40792270525930896,-0.7926992806341944,-1.1167216598972558,-1.0964702611933144,-0.9547104702657251,-0.8129506793381357,0},{0,-0.16490592081201294,-0.2661629143317196,-0.3269171104435436,-0.5699338948908397,-0.40792270525930896,-0.347168509147485,-0.3066657117396023,-0.3269171104435436,-0.22566011692383695,-0.3269171104435436,-0.44842550266719167,-0.28641431303566095,-0.3674199078514263,-0.7521964832263117,-0.8534534767460183,-0.590185293594781,-0.38767130655536763,-0.5496824961868984,-0.20540871821989562,-0.4889283000750743,-1.136973058601197,-1.015464666377549,-0.833202078042077,-0.7926992806341944,0},{0,-0.20540871821989562,-0.16490592081201294,-0.347168509147485,-0.3066657117396023,-0.16490592081201294,-0.3066657117396023,-0.38767130655536763,-0.38767130655536763,-0.10415172470018894,0.03760806622740042,0.07811086363528309,0.5438930338259338,0.15911645845104844,-0.529431097482957,-0.893956274153901,-0.650939489706605,-0.4889283000750743,-0.468676901371133,-0.3674199078514263,-0.6306880910026637,-1.3597384443445517,-1.015464666377549,-1.0559674637854317,-1.0964702611933144,0},{0,-0.7116936858184291,-0.2661629143317196,-0.18515731951595427,-0.18515731951595427,-0.0839003259962476,-0.6104366922987223,-0.6104366922987223,-0.0839003259962476,0.8881668117929366,0.7464070208653472,0.07811086363528309,0.44263604030622716,0.38188184419440313,-0.347168509147485,-0.7319450845223704,-0.38767130655536763,-0.347168509147485,-0.44842550266719167,-0.6711908884105463,-1.3394870456406105,-1.3394870456406105,-1.0357160650814905,-1.0357160650814905,-1.0762188624893732,0},{0,0.21987065456287244,0.4628874390101685,0.11861366104316577,-0.023146129884423584,-0.06364892729230626,-0.5496824961868984,-0.3066657117396023,0.40213324289834446,1.1716863936481152,0.5236416351219925,-0.0839003259962476,-0.529431097482957,-0.9547104702657251,-0.5699338948908397,-0.6914422871144876,-0.3066657117396023,-0.06364892729230626,-0.40792270525930896,-0.6914422871144876,-1.1572244573051385,-1.2584814508248452,-1.2584814508248452,-1.1774758560090797,-1.1774758560090797,0},{0,0.5236416351219925,0.42238464160228584,0.2603734519707551,0.2401220532668138,-0.20540871821989562,-0.468676901371133,0.21987065456287244,0.5843958312338166,0.5641444325298751,0.017356667523459088,-0.023146129884423584,0.1793678571549898,-0.6306880910026637,-0.0028947311804822487,-0.023146129884423584,-0.16490592081201294,0.1388650597471071,-0.468676901371133,-0.833202078042077,-1.1774758560090797,-1.3394870456406105,-1.2989842482327278,-1.2584814508248452,-1.2382300521209038,0},{0,0.4831388377141098,0.3616304454904618,0.1388650597471071,0.32112764808257915,0.05785946493134176,0.07811086363528309,0.6248986286416992,0.5236416351219925,-0.0839003259962476,-0.38767130655536763,0.05785946493134176,0.7666584195692885,0.6451500273456405,0.8274126156811126,0.5438930338259338,0.6654014260495819,0.2401220532668138,-0.4281741039632503,-0.7116936858184291,-1.1572244573051385,-1.136973058601197,-1.197727254713021,-1.1572244573051385,-0.9952132676736077,0},{0,0.5438930338259338,0.5033902364180511,0.1793678571549898,-0.023146129884423584,0.3008762493786378,0.5236416351219925,0.7869098182732298,0.7464070208653472,0.4831388377141098,-0.023146129884423584,0.28062485067469645,0.8274126156811126,0.8881668117929366,0.7666584195692885,0.7869098182732298,0.8274126156811126,0.3616304454904618,0.11861366104316577,-0.529431097482957,-0.9749618689696664,-1.0559674637854317,-1.2989842482327278,-0.9952132676736077,-0.44842550266719167,0},{0,0.40213324289834446,0.3616304454904618,0.11861366104316577,-0.3269171104435436,0.21987065456287244,0.7666584195692885,0.9691724066087019,0.6248986286416992,0.6248986286416992,0.15911645845104844,0.19961925585893112,0.7261556221614058,0.6654014260495819,0.5641444325298751,0.5438930338259338,0.6451500273456405,0.7261556221614058,0.40213324289834446,-0.772447881930253,-1.1572244573051385,-1.4812468365681999,-1.4609954378642585,-0.7926992806341944,-0.28641431303566095,0},{0,0.42238464160228584,0.5033902364180511,0.4628874390101685,-0.38767130655536763,-0.0028947311804822487,1.0501780014244673,0.1388650597471071,-0.3066657117396023,0.5033902364180511,0.44263604030622716,0.03760806622740042,-0.14465452210807161,-0.0028947311804822487,0.32112764808257915,0.09836226233922443,0.03760806622740042,-0.10415172470018894,-0.5496824961868984,-1.3799898430484931,-1.663509424903672,-1.7242636210154958,-1.5825038300879064,-0.833202078042077,-0.28641431303566095,0},{0,0.7059042234574645,0.7464070208653472,0.5236416351219925,-0.4889283000750743,-0.5699338948908397,0.9691724066087019,-0.16490592081201294,-0.043397528588364924,0.8679154130889952,0.28062485067469645,-0.893956274153901,-0.5496824961868984,-0.9344590715617838,-0.40792270525930896,-0.6104366922987223,-0.9952132676736077,-1.1572244573051385,-1.6027552287918478,-1.7445150197194372,-1.5622524313839652,-1.6027552287918478,-1.2989842482327278,-0.893956274153901,-0.06364892729230626,0},{0,0.7261556221614058,1.09068079883235,0.7869098182732298,-0.12440312340413026,-1.3799898430484931,0.2401220532668138,0.5641444325298751,0.28062485067469645,0.5033902364180511,-0.14465452210807161,-0.5699338948908397,0.8476640143850539,0.07811086363528309,-0.6914422871144876,-0.9749618689696664,-1.3394870456406105,-1.2787328495287864,-1.501498235272141,-1.2787328495287864,-1.1167216598972558,-1.4812468365681999,-1.136973058601197,-0.9142076728578423,-0.06364892729230626,0},{0,0.6248986286416992,1.0299266027205258,0.7059042234574645,-0.023146129884423584,-1.805269215831261,-1.5420010326800238,-0.2661629143317196,-0.0028947311804822487,0.03760806622740042,-0.468676901371133,-0.6711908884105463,0.3413790467865205,0.4628874390101685,-0.4281741039632503,-1.2179786534169623,-1.5420010326800238,-1.0762188624893732,-1.0559674637854317,-1.0559674637854317,-1.0762188624893732,-1.6027552287918478,-1.4609954378642585,-0.9547104702657251,0.07811086363528309,0},{0,0.4831388377141098,0.7261556221614058,0.21987065456287244,-0.590185293594781,-1.7647664184233784,-1.8457720132391437,-1.6837608236076131,-1.4204926404563758,-1.0559674637854317,-0.9547104702657251,-1.2584814508248452,-0.8737048754499597,-0.590185293594781,-0.8534534767460183,-1.136973058601197,-1.6432580261997305,-1.501498235272141,-1.440744039160317,-1.4204926404563758,-1.1167216598972558,-1.3394870456406105,-1.2382300521209038,-1.015464666377549,-0.10415172470018894,0},{0,0.15911645845104844,0.38188184419440313,-0.06364892729230626,-1.0357160650814905,-1.2584814508248452,-0.833202078042077,-1.319235646936669,-1.623006627495789,-1.623006627495789,-1.3799898430484931,-1.2382300521209038,-0.8129506793381357,-1.2179786534169623,-1.623006627495789,-1.4609954378642585,-1.6432580261997305,-1.663509424903672,-1.663509424903672,-1.805269215831261,-1.5217496339760825,-1.1572244573051385,-1.1167216598972558,-1.0357160650814905,-0.7116936858184291,0},{0,-0.16490592081201294,0.15911645845104844,-0.0839003259962476,-0.4889283000750743,-0.5091796987790157,-0.893956274153901,-1.0357160650814905,-0.8534534767460183,-0.833202078042077,-0.9344590715617838,-0.650939489706605,-0.9749618689696664,-1.6837608236076131,-1.9267776080549093,-1.9470290067588505,-1.8457720132391437,-1.7242636210154958,-1.623006627495789,-1.8660234119430852,-1.8862748106470266,-1.663509424903672,-1.5420010326800238,-1.0357160650814905,-1.0559674637854317,0},{0,-0.3269171104435436,-0.347168509147485,0.3616304454904618,0.5438930338259338,-0.28641431303566095,-1.319235646936669,-0.8534534767460183,-0.7521964832263117,-0.6711908884105463,-0.772447881930253,-0.8534534767460183,-1.0762188624893732,-1.2787328495287864,-1.5420010326800238,-1.6432580261997305,-1.7445150197194372,-1.7040122223115546,-1.7242636210154958,-1.7647664184233784,-1.7242636210154958,-1.8660234119430852,-1.440744039160317,-0.9142076728578423,-1.4002412417524344,0},{0,-0.28641431303566095,-0.6104366922987223,-0.24591151562777827,0.2603734519707551,0.2401220532668138,-0.40792270525930896,0.017356667523459088,-0.40792270525930896,-0.8129506793381357,-0.650939489706605,-0.6104366922987223,-0.833202078042077,-0.9749618689696664,-1.2382300521209038,-1.3597384443445517,-1.5825038300879064,-1.663509424903672,-1.7647664184233784,-1.8862748106470266,-1.7242636210154958,-1.7040122223115546,-1.319235646936669,-1.1774758560090797,-1.7040122223115546,0},{0,0.03760806622740042,-0.06364892729230626,-0.5091796987790157,-0.8534534767460183,0.19961925585893112,-0.24591151562777827,-0.833202078042077,-0.7521964832263117,-0.772447881930253,-0.22566011692383695,-0.18515731951595427,-0.6306880910026637,-0.8129506793381357,-0.9344590715617838,-1.0559674637854317,-1.1572244573051385,-1.1167216598972558,-1.2989842482327278,-1.5217496339760825,-1.2989842482327278,-1.2382300521209038,-1.4204926404563758,-1.4609954378642585,-1.3799898430484931,0},{0,0.05785946493134176,-0.0839003259962476,-0.3269171104435436,-0.8534534767460183,-0.44842550266719167,-0.0028947311804822487,-0.893956274153901,-0.833202078042077,-0.7319450845223704,-0.3066657117396023,-0.24591151562777827,-0.44842550266719167,-0.8534534767460183,-0.7926992806341944,-0.650939489706605,-0.6306880910026637,-0.8129506793381357,-1.015464666377549,-1.015464666377549,-0.7319450845223704,-0.7926992806341944,-1.015464666377549,-1.0357160650814905,-0.9749618689696664,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}}; 
#endif