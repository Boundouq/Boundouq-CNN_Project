
#ifndef __IMG0_H__
#define __IMG0_H__

#include "KERNEL.h"

static d_type norm_image[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH] = {{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1.2483671958496831,1.1175709724112912,1.2483671958496831,1.1829690841304872,1.1393703429843565,1.1393703429843565,1.3355646781419444,2.926918729975713,1.8151508307493815,0.8559785255345073,0.7469816726691807,0.6597841903769194,-0.01599629738810568,-0.7353755262992614,-0.5827799322878041,0.02760244375802497,0.005803073184959645,-0.1249931502534323,-0.3211874854110202,-0.40838496770328153,-0.8225730085915227,-0.6045793028608695,-0.5827799322878041,-0.14679252082649763,0},{0,1.0739722312651605,1.161169713557422,1.2047684547035524,1.2047684547035524,1.1175709724112912,1.161169713557422,1.1175709724112912,1.4881602721534017,0.9867747489728992,0.3545930023540048,-0.3211874854110202,-0.9969679731760452,-0.9315698614568493,-0.9969679731760452,-0.4955824499955428,0.1365992966233516,0.2237967789156129,0.1583986671964169,0.049401814331090296,-0.3865855971302162,-0.27758874426488955,-0.45198370884941214,-1.1713629377605679,-0.97516860260298,0},{0,0.899577266680638,1.2701665664227484,1.226567825276618,1.2701665664227484,1.2483671958496831,1.1829690841304872,1.1393703429843565,0.7687810432422459,0.3763923729270702,0.3327936317809395,-0.25578937369182425,-0.9533692320299146,-0.7353755262992614,-0.8661717497376533,-0.6263786734339347,0.44179048464626614,0.7469816726691807,0.26739552006174355,-0.14679252082649763,-0.10319377968036697,0.07120118490415561,-0.5827799322878041,-1.0623660848952412,-1.4329553846373517,0},{0,0.6815835609499847,1.2047684547035524,1.161169713557422,1.226567825276618,1.2919659369958139,1.0739722312651605,0.6161854492307888,0.18019803776948223,0.3981917435001355,0.70338293152305,0.09300055547722094,-0.5173818205686082,-0.45198370884941214,-0.5827799322878041,-0.7571748968723268,0.26739552006174355,1.1175709724112912,0.5289879669385275,-0.2121906325456936,-0.1249931502534323,-0.25578937369182425,-0.5827799322878041,-1.258560420052829,-1.3675572729181558,0},{0,0.899577266680638,1.0739722312651605,1.1175709724112912,1.1829690841304872,1.161169713557422,1.3573640487150098,0.02760244375802497,0.28919489063480885,0.9867747489728992,0.9649753783998339,0.20199740834254756,-0.5609805617147388,-0.6481780440070001,-0.6045793028608695,-0.6917767851531307,-0.6699774145800654,0.5725867080846581,0.7469816726691807,0.02760244375802497,-0.5391811911416735,-0.6263786734339347,-0.5609805617147388,-0.8879711203107187,-1.2149616789066986,0},{0,1.3573640487150098,1.0085741195459645,0.9649753783998339,0.899577266680638,2.0767432776261656,2.7307243948181252,2.0767432776261656,0.9649753783998339,1.3573640487150098,0.7905804138153113,0.28919489063480885,-0.40838496770328153,-0.5609805617147388,-0.8225730085915227,-1.1495635671875026,-0.778974267445392,0.5507873375115927,0.6815835609499847,0.46358985521933144,-0.1249931502534323,-0.5609805617147388,-0.5391811911416735,-0.6045793028608695,-0.8007736380184574,0},{0,1.4227621604342058,0.9431760078267686,1.0303734901190298,0.2237967789156129,2.2075395010645575,2.7307243948181252,2.3601350950760147,1.1393703429843565,1.5535583838725977,0.9649753783998339,0.28919489063480885,0.18019803776948223,-0.7353755262992614,-0.6917767851531307,-1.454754755210417,-0.45198370884941214,1.379163419288075,0.9867747489728992,0.9431760078267686,-0.10319377968036697,-0.5391811911416735,-0.19039126197262826,-0.5173818205686082,-0.7353755262992614,0},{0,1.640755866164859,1.1829690841304872,1.3355646781419444,0.4853892257923968,0.11479992605028627,1.7933514601763163,1.9023483130416428,1.2701665664227484,1.5971571250187284,1.6843546073109896,0.4853892257923968,0.11479992605028627,-0.2121906325456936,-0.6045793028608695,-1.6073503492218744,0.28919489063480885,2.1421413893453614,1.0521728606920953,0.7469816726691807,-0.40838496770328153,-0.6263786734339347,-0.3865855971302162,-0.16859189139956296,-0.5827799322878041,0},{0,1.3573640487150098,1.1829690841304872,1.444561531007271,1.0303734901190298,-0.3211874854110202,1.226567825276618,1.226567825276618,0.5507873375115927,1.6189564955917937,2.2729376127837533,1.0521728606920953,0.24559614948867822,0.18019803776948223,0.07120118490415561,-1.3457579023450905,0.834179154961442,1.7933514601763163,0.9431760078267686,0.24559614948867822,-0.45198370884941214,-0.6045793028608695,-0.6045793028608695,-0.36478622655715087,-0.5609805617147388,0},{0,0.1583986671964169,0.5289879669385275,1.3355646781419444,1.2047684547035524,-0.19039126197262826,0.7687810432422459,0.7251823020961153,1.2047684547035524,1.6843546073109896,2.4909313185144066,1.4881602721534017,0.637984819803854,0.3109942612078742,0.11479992605028627,-0.8879711203107187,0.9213766372537032,1.6189564955917937,0.8123797843883767,0.049401814331090296,-0.5391811911416735,-0.6917767851531307,-0.8661717497376533,-0.6917767851531307,-0.27758874426488955,0},{0,-0.14679252082649763,-0.27758874426488955,0.9649753783998339,1.2047684547035524,-0.25578937369182425,0.07120118490415561,0.5725867080846581,1.8805489424685775,1.7061539778840549,1.313765307568879,0.7251823020961153,0.9213766372537032,0.7469816726691807,-0.19039126197262826,-0.8879711203107187,0.8777778961075726,1.4663609015803363,0.5507873375115927,0.3981917435001355,-0.037795667961171,-0.5827799322878041,-0.45198370884941214,-0.36478622655715087,-0.059595038534236325,0},{0,0.3981917435001355,-0.7353755262992614,0.6161854492307888,0.9431760078267686,0.07120118490415561,0.3981917435001355,0.6815835609499847,2.578128800806668,2.8397212476834515,0.7251823020961153,0.5071885963654621,0.41999111407320083,0.20199740834254756,-0.08139440910730165,-0.36478622655715087,0.70338293152305,1.226567825276618,0.8777778961075726,0.005803073184959645,-0.5391811911416735,-0.8879711203107187,-0.5391811911416735,-0.14679252082649763,0.005803073184959645,0},{0,1.226567825276618,-0.7353755262992614,0.3109942612078742,0.5725867080846581,0.5725867080846581,-0.3429868559840855,0.9213766372537032,1.3355646781419444,1.0957716018382258,0.6161854492307888,0.02760244375802497,0.02760244375802497,-0.23399000311875892,-0.14679252082649763,0.005803073184959645,1.2919659369958139,0.9649753783998339,0.7905804138153113,0.5071885963654621,-0.059595038534236325,-0.7353755262992614,-0.713576155726196,-0.3865855971302162,-0.23399000311875892,0},{0,1.4009627898611403,-0.3865855971302162,-0.3429868559840855,0.9649753783998339,0.7905804138153113,-0.1249931502534323,0.3763923729270702,0.1365992966233516,0.049401814331090296,0.09300055547722094,-0.2121906325456936,0.07120118490415561,-0.5609805617147388,-0.23399000311875892,0.70338293152305,0.1365992966233516,-0.9533692320299146,0.3545930023540048,0.46358985521933144,-0.8007736380184574,-1.1277641966144372,-1.1713629377605679,-0.8879711203107187,-0.2121906325456936,0},{0,1.4009627898611403,0.26739552006174355,-0.5609805617147388,0.637984819803854,0.899577266680638,0.5071885963654621,-0.16859189139956296,-0.7571748968723268,0.4853892257923968,0.26739552006174355,0.3763923729270702,0.7687810432422459,-0.5827799322878041,-0.43018433827634683,0.834179154961442,0.44179048464626614,0.11479992605028627,-0.10319377968036697,-0.8007736380184574,-1.040566714322176,-1.4765541257834824,-1.0187673437491105,-0.5609805617147388,0.46358985521933144,0},{0,1.4227621604342058,0.70338293152305,-0.5609805617147388,0.1583986671964169,0.2237967789156129,0.5507873375115927,0.70338293152305,-0.9097704908837839,0.3763923729270702,-0.08139440910730165,0.7251823020961153,1.575357754445663,0.09300055547722094,-0.844372379164588,0.41999111407320083,0.5507873375115927,0.4853892257923968,-0.4955824499955428,-1.323958531772025,-1.3021591611989598,-1.4111560140642865,-0.4737830794224775,0.20199740834254756,1.1175709724112912,0},{0,1.509959642726467,0.8777778961075726,-0.27758874426488955,0.41999111407320083,1.2919659369958139,-0.19039126197262826,-0.40838496770328153,-0.6917767851531307,-0.40838496770328153,0.2237967789156129,1.444561531007271,1.7279533484571203,0.834179154961442,-0.25578937369182425,-0.4955824499955428,-0.5391811911416735,-1.1277641966144372,-1.4329553846373517,-1.6073503492218744,-1.912541537244789,-1.4329553846373517,-1.1277641966144372,-0.08139440910730165,0.70338293152305,0},{0,1.509959642726467,0.5725867080846581,-0.6263786734339347,0.834179154961442,2.9051193594026476,2.3383357245029495,0.46358985521933144,0.4853892257923968,0.8123797843883767,1.4009627898611403,1.7061539778840549,1.7933514601763163,1.226567825276618,0.28919489063480885,-0.037795667961171,-1.105964826041372,-1.6727484609410703,-1.6945478315141356,-1.3675572729181558,-1.1713629377605679,-1.105964826041372,-1.1713629377605679,-0.9315698614568493,-0.8661717497376533,0},{0,1.4227621604342058,0.6161854492307888,-0.059595038534236325,2.1639407599184266,3.07951432398717,3.057714953414105,2.098542648199231,0.26739552006174355,0.049401814331090296,0.26739552006174355,0.09300055547722094,0.2237967789156129,-0.16859189139956296,-0.9533692320299146,-0.9533692320299146,-1.1277641966144372,-1.3021591611989598,-1.3457579023450905,-1.323958531772025,-1.2149616789066986,-1.2149616789066986,-1.323958531772025,-1.4983534963565477,-1.323958531772025,0},{0,1.444561531007271,1.161169713557422,1.161169713557422,2.926918729975713,3.07951432398717,2.512730689087472,-0.037795667961171,-1.1277641966144372,-1.2803597906258946,-1.3675572729181558,-1.3675572729181558,-1.389356643491221,-1.454754755210417,-1.5201528669296132,-1.4329553846373517,-1.5201528669296132,-1.6073503492218744,-1.4329553846373517,-1.4329553846373517,-1.4983534963565477,-1.5201528669296132,-1.4329553846373517,-1.4329553846373517,-1.3457579023450905,0},{0,1.1829690841304872,0.44179048464626614,1.7933514601763163,3.1013136945602353,2.817921877110386,0.637984819803854,-1.105964826041372,-1.3457579023450905,-1.3457579023450905,-1.323958531772025,-1.3675572729181558,-1.3457579023450905,-1.4111560140642865,-1.5201528669296132,-1.5855509786488091,-1.6945478315141356,-1.6727484609410703,-1.5855509786488091,-1.6073503492218744,-1.5201528669296132,-1.454754755210417,-1.2149616789066986,-1.0841654554683067,-1.1495635671875026,0},{0,0.3545930023540048,0.3545930023540048,2.251138242210688,3.1231130651333006,1.640755866164859,-0.9969679731760452,-1.258560420052829,-1.3457579023450905,-1.3021591611989598,-1.3021591611989598,-1.4329553846373517,-1.454754755210417,-1.4983534963565477,-1.5419522375026784,-1.650949090368005,-1.5855509786488091,-1.5637516080757436,-1.5637516080757436,-1.4983534963565477,-1.4329553846373517,-1.1495635671875026,-1.0841654554683067,-1.040566714322176,-1.1495635671875026,0},{0,-0.9969679731760452,0.3545930023540048,2.447332577368276,2.796122506537321,0.26739552006174355,-1.1713629377605679,-1.3675572729181558,-1.2149616789066986,-1.258560420052829,-1.4765541257834824,-1.4765541257834824,-1.4111560140642865,-1.4329553846373517,-1.4983534963565477,-1.4983534963565477,-1.4765541257834824,-1.4765541257834824,-1.454754755210417,-1.258560420052829,-1.1713629377605679,-1.258560420052829,-1.4329553846373517,-1.4983534963565477,-1.650949090368005,0},{0,-1.4765541257834824,-0.7353755262992614,1.9677464247608387,2.1639407599184266,-0.3211874854110202,-1.0187673437491105,-1.258560420052829,-1.389356643491221,-1.1713629377605679,-1.389356643491221,-1.5637516080757436,-1.454754755210417,-1.4111560140642865,-1.389356643491221,-1.4111560140642865,-1.4329553846373517,-1.323958531772025,-1.5855509786488091,-1.5855509786488091,-1.389356643491221,-1.4111560140642865,-1.5855509786488091,-1.8253440549525275,-1.5637516080757436,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0.049401814331090296,0.02760244375802497,0.18019803776948223,0.09300055547722094,0.02760244375802497,0.09300055547722094,0.3545930023540048,2.229338871637623,0.9649753783998339,0.049401814331090296,-0.01599629738810568,-0.08139440910730165,-0.6917767851531307,-1.2803597906258946,-0.9315698614568493,-0.19039126197262826,-0.037795667961171,0.049401814331090296,-0.2121906325456936,-0.3865855971302162,-0.8661717497376533,-0.7353755262992614,-0.844372379164588,-0.6263786734339347,0},{0,0.07120118490415561,0.02760244375802497,0.09300055547722094,0.07120118490415561,-0.01599629738810568,0.09300055547722094,0.1365992966233516,0.5725867080846581,0.2237967789156129,-0.2121906325456936,-0.8007736380184574,-1.3457579023450905,-1.1713629377605679,-1.2149616789066986,-0.6263786734339347,0.02760244375802497,0.20199740834254756,0.2237967789156129,0.09300055547722094,-0.3429868559840855,-0.25578937369182425,-0.45198370884941214,-1.1713629377605679,-1.1713629377605679,0},{0,0.11479992605028627,0.1365992966233516,0.07120118490415561,0.1365992966233516,0.11479992605028627,0.09300055547722094,0.18019803776948223,-0.10319377968036697,-0.2993881148379549,-0.08139440910730165,-0.5391811911416735,-0.97516860260298,-0.6263786734339347,-0.8007736380184574,-0.6045793028608695,0.3981917435001355,0.6597841903769194,0.1365992966233516,-0.27758874426488955,-0.2121906325456936,-0.01599629738810568,-0.6263786734339347,-0.8879711203107187,-1.4111560140642865,0},{0,-0.01599629738810568,0.11479992605028627,0.049401814331090296,0.09300055547722094,0.1583986671964169,0.02760244375802497,-0.059595038534236325,-0.3865855971302162,-0.037795667961171,0.41999111407320083,-0.1249931502534323,-0.5391811911416735,-0.36478622655715087,-0.5173818205686082,-0.7571748968723268,0.1365992966233516,0.899577266680638,0.26739552006174355,-0.40838496770328153,-0.2993881148379549,-0.40838496770328153,-0.6699774145800654,-1.1277641966144372,-1.2803597906258946,0},{0,0.26739552006174355,0.02760244375802497,0.11479992605028627,0.2237967789156129,0.20199740834254756,0.5071885963654621,-0.4955824499955428,-0.14679252082649763,0.637984819803854,0.6815835609499847,-0.01599629738810568,-0.6917767851531307,-0.6699774145800654,-0.5827799322878041,-0.7353755262992614,-0.8879711203107187,0.28919489063480885,0.5071885963654621,-0.19039126197262826,-0.713576155726196,-0.7571748968723268,-0.6481780440070001,-0.844372379164588,-1.1931623083336331,0},{0,0.8123797843883767,0.09300055547722094,0.09300055547722094,0.1365992966233516,1.4881602721534017,2.229338871637623,1.4881602721534017,0.41999111407320083,0.899577266680638,0.41999111407320083,-0.037795667961171,-0.5827799322878041,-0.6045793028608695,-0.8225730085915227,-1.1931623083336331,-0.9533692320299146,0.28919489063480885,0.46358985521933144,0.26739552006174355,-0.2993881148379549,-0.6699774145800654,-0.5827799322878041,-0.5827799322878041,-0.778974267445392,0},{0,0.9649753783998339,0.005803073184959645,0.1365992966233516,-0.4955824499955428,1.8587495718955123,2.447332577368276,1.7279533484571203,0.5071885963654621,1.0303734901190298,0.5507873375115927,-0.08139440910730165,-0.01599629738810568,-0.778974267445392,-0.6917767851531307,-1.4765541257834824,-0.5827799322878041,1.161169713557422,0.7687810432422459,0.7687810432422459,-0.25578937369182425,-0.6263786734339347,-0.2121906325456936,-0.5173818205686082,-0.713576155726196,0},{0,1.2047684547035524,0.18019803776948223,0.24559614948867822,-0.40838496770328153,-0.36478622655715087,1.5317590132995322,1.2919659369958139,0.6597841903769194,1.0739722312651605,1.2919659369958139,0.1583986671964169,-0.10319377968036697,-0.2993881148379549,-0.6045793028608695,-1.6073503492218744,0.20199740834254756,1.9459470541877735,0.8777778961075726,0.5943860786577234,-0.4955824499955428,-0.6917767851531307,-0.40838496770328153,-0.16859189139956296,-0.5391811911416735,0},{0,0.9649753783998339,0.24559614948867822,0.24559614948867822,-0.059595038534236325,-0.9533692320299146,0.9213766372537032,0.70338293152305,0.049401814331090296,1.1829690841304872,1.9677464247608387,0.8123797843883767,0.02760244375802497,0.049401814331090296,0.049401814331090296,-1.3457579023450905,0.7687810432422459,1.640755866164859,0.8123797843883767,0.1365992966233516,-0.5173818205686082,-0.6263786734339347,-0.6045793028608695,-0.36478622655715087,-0.5391811911416735,0},{0,-0.037795667961171,-0.1249931502534323,0.26739552006174355,0.09300055547722094,-0.8661717497376533,0.44179048464626614,0.28919489063480885,0.8123797843883767,1.3573640487150098,2.2729376127837533,1.313765307568879,0.41999111407320083,0.11479992605028627,0.049401814331090296,-0.8879711203107187,0.8777778961075726,1.509959642726467,0.70338293152305,-0.037795667961171,-0.5827799322878041,-0.6917767851531307,-0.844372379164588,-0.6917767851531307,-0.25578937369182425,0},{0,-0.059595038534236325,-0.4955824499955428,0.1583986671964169,0.2237967789156129,-0.8225730085915227,-0.1249931502534323,0.24559614948867822,1.5971571250187284,1.4881602721534017,1.161169713557422,0.6161854492307888,0.6815835609499847,0.5289879669385275,-0.25578937369182425,-0.8879711203107187,0.8777778961075726,1.379163419288075,0.46358985521933144,0.3545930023540048,-0.059595038534236325,-0.5609805617147388,-0.40838496770328153,-0.3429868559840855,-0.037795667961171,0},{0,0.5507873375115927,-0.6263786734339347,0.18019803776948223,0.28919489063480885,-0.3865855971302162,0.18019803776948223,0.41999111407320083,2.38193446564908,2.70892502424506,0.5725867080846581,0.3981917435001355,0.20199740834254756,0.005803073184959645,-0.16859189139956296,-0.5173818205686082,0.4853892257923968,1.0303734901190298,0.7687810432422459,-0.08139440910730165,-0.5827799322878041,-0.8661717497376533,-0.5173818205686082,-0.16859189139956296,-0.059595038534236325,0},{0,1.2701665664227484,-0.5609805617147388,0.28919489063480885,0.3109942612078742,0.20199740834254756,-0.6917767851531307,0.6815835609499847,1.1175709724112912,0.8777778961075726,0.44179048464626614,-0.1249931502534323,-0.1249931502534323,-0.23399000311875892,-0.23399000311875892,-0.4737830794224775,0.6815835609499847,0.5725867080846581,0.637984819803854,0.3981917435001355,-0.14679252082649763,-0.778974267445392,-0.713576155726196,-0.40838496770328153,-0.45198370884941214,0},{0,1.5317590132995322,-0.2121906325456936,-0.3429868559840855,0.8123797843883767,0.5507873375115927,-0.40838496770328153,0.09300055547722094,-0.14679252082649763,-0.2121906325456936,-0.14679252082649763,-0.45198370884941214,-0.037795667961171,-0.45198370884941214,-0.19039126197262826,0.3545930023540048,-0.3429868559840855,-1.2149616789066986,0.18019803776948223,0.3109942612078742,-0.9315698614568493,-1.2149616789066986,-1.2149616789066986,-0.9097704908837839,-0.40838496770328153,0},{0,1.575357754445663,0.41999111407320083,-0.5173818205686082,0.5943860786577234,0.7905804138153113,0.3545930023540048,-0.4737830794224775,-1.040566714322176,0.20199740834254756,-0.01599629738810568,0.11479992605028627,0.6815835609499847,-0.43018433827634683,-0.3429868559840855,0.5943860786577234,0.11479992605028627,-0.059595038534236325,-0.27758874426488955,-0.9533692320299146,-1.1495635671875026,-1.5419522375026784,-1.0841654554683067,-0.9315698614568493,-0.14679252082649763,0},{0,1.5317590132995322,0.8123797843883767,-0.4737830794224775,0.20199740834254756,0.26739552006174355,0.5289879669385275,0.4853892257923968,-1.1495635671875026,0.1365992966233516,-0.3211874854110202,0.4853892257923968,1.4009627898611403,0.1365992966233516,-0.8007736380184574,0.1583986671964169,0.26739552006174355,0.3763923729270702,-0.5609805617147388,-1.3675572729181558,-1.323958531772025,-1.3675572729181558,-0.4737830794224775,-0.45198370884941214,0.1365992966233516,0},{0,1.509959642726467,0.9867747489728992,-0.19039126197262826,0.5071885963654621,1.379163419288075,-0.14679252082649763,-0.4737830794224775,-0.7571748968723268,-0.4737830794224775,0.1365992966233516,1.3355646781419444,1.5317590132995322,0.7905804138153113,-0.25578937369182425,-0.7353755262992614,-0.7571748968723268,-1.105964826041372,-1.3021591611989598,-1.4329553846373517,-1.716347202087201,-1.1931623083336331,-0.8879711203107187,-0.25578937369182425,0.28919489063480885,0},{0,1.4663609015803363,0.70338293152305,-0.5391811911416735,0.899577266680638,2.948718100548778,2.403733836222145,0.6161854492307888,0.637984819803854,0.9649753783998339,1.5317590132995322,1.8369502013224468,1.7497527190301856,1.313765307568879,0.46358985521933144,-0.059595038534236325,-1.0841654554683067,-1.3675572729181558,-1.258560420052829,-0.9097704908837839,-0.6699774145800654,-0.5827799322878041,-0.6045793028608695,-0.27758874426488955,-0.23399000311875892,0},{0,1.4227621604342058,0.7469816726691807,0.005803073184959645,2.1639407599184266,3.057714953414105,3.07951432398717,2.447332577368276,0.6815835609499847,0.44179048464626614,0.637984819803854,0.46358985521933144,0.46358985521933144,0.26739552006174355,-0.40838496770328153,-0.5391811911416735,-0.6481780440070001,-0.6045793028608695,-0.6045793028608695,-0.5827799322878041,-0.40838496770328153,-0.3865855971302162,-0.45198370884941214,-0.3429868559840855,-0.16859189139956296,0},{0,1.5317590132995322,1.2701665664227484,1.1829690841304872,2.9051193594026476,3.0359155828410396,2.5999281713797333,0.5289879669385275,-0.5173818205686082,-0.6917767851531307,-0.778974267445392,-0.8007736380184574,-0.8661717497376533,-0.713576155726196,-0.6699774145800654,-0.6699774145800654,-0.6481780440070001,-0.5609805617147388,-0.4737830794224775,-0.4955824499955428,-0.5391811911416735,-0.4955824499955428,-0.40838496770328153,-0.3865855971302162,-0.3429868559840855,0},{0,1.4663609015803363,0.5289879669385275,1.6843546073109896,3.014116212267974,2.9051193594026476,1.0303734901190298,-0.3865855971302162,-0.6045793028608695,-0.6045793028608695,-0.5827799322878041,-0.6263786734339347,-0.6045793028608695,-0.5609805617147388,-0.6045793028608695,-0.6481780440070001,-0.713576155726196,-0.6263786734339347,-0.5609805617147388,-0.5827799322878041,-0.4955824499955428,-0.43018433827634683,-0.19039126197262826,-0.19039126197262826,-0.23399000311875892,0},{0,0.7905804138153113,0.5289879669385275,2.2075395010645575,3.07951432398717,1.8805489424685775,-0.40838496770328153,-0.45198370884941214,-0.5173818205686082,-0.4737830794224775,-0.4737830794224775,-0.6263786734339347,-0.6481780440070001,-0.6481780440070001,-0.6699774145800654,-0.6917767851531307,-0.6263786734339347,-0.5609805617147388,-0.4955824499955428,-0.43018433827634683,-0.36478622655715087,-0.08139440910730165,-0.037795667961171,-0.059595038534236325,-0.08139440910730165,0},{0,-0.36478622655715087,0.7251823020961153,2.5563294302336024,2.9051193594026476,0.6815835609499847,-0.43018433827634683,-0.5391811911416735,-0.3865855971302162,-0.43018433827634683,-0.6481780440070001,-0.6481780440070001,-0.6263786734339347,-0.6045793028608695,-0.6263786734339347,-0.5609805617147388,-0.5173818205686082,-0.4737830794224775,-0.3211874854110202,-0.1249931502534323,-0.037795667961171,-0.14679252082649763,-0.3211874854110202,-0.36478622655715087,-0.45198370884941214,0},{0,-0.6263786734339347,-0.1249931502534323,2.3383357245029495,2.534530059660537,0.3109942612078742,-0.16859189139956296,-0.3865855971302162,-0.5391811911416735,-0.3211874854110202,-0.5391811911416735,-0.6917767851531307,-0.6481780440070001,-0.6045793028608695,-0.5391811911416735,-0.4955824499955428,-0.4955824499955428,-0.3211874854110202,-0.43018433827634683,-0.40838496770328153,-0.2121906325456936,-0.23399000311875892,-0.40838496770328153,-0.5827799322878041,-0.23399000311875892,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,-1.4983534963565477,-1.5637516080757436,-1.4111560140642865,-1.4765541257834824,-1.5419522375026784,-1.5201528669296132,-1.1495635671875026,1.1393703429843565,-0.10319377968036697,-1.2149616789066986,-1.1277641966144372,-0.8879711203107187,-1.3457579023450905,-1.7599459432333315,-1.2149616789066986,-0.2993881148379549,-0.01599629738810568,0.1365992966233516,-0.14679252082649763,-0.40838496770328153,-0.97516860260298,-0.9097704908837839,-1.4111560140642865,-1.454754755210417,0},{0,-1.4765541257834824,-1.5855509786488091,-1.5419522375026784,-1.5419522375026784,-1.6291497197949396,-1.5855509786488091,-1.5201528669296132,-0.5827799322878041,-0.7353755262992614,-1.1713629377605679,-1.4983534963565477,-1.7599459432333315,-1.4983534963565477,-1.454754755210417,-0.778974267445392,-0.037795667961171,0.18019803776948223,0.2237967789156129,0.09300055547722094,-0.3429868559840855,-0.3211874854110202,-0.5609805617147388,-1.4111560140642865,-1.6291497197949396,0},{0,-1.389356643491221,-1.4983534963565477,-1.5637516080757436,-1.4983534963565477,-1.5201528669296132,-1.6291497197949396,-1.5855509786488091,-1.3021591611989598,-1.1495635671875026,-0.8007736380184574,-0.9097704908837839,-1.1931623083336331,-0.8661717497376533,-1.040566714322176,-0.8225730085915227,0.20199740834254756,0.44179048464626614,-0.08139440910730165,-0.4737830794224775,-0.3865855971302162,-0.19039126197262826,-0.7571748968723268,-0.9315698614568493,-1.5855509786488091,0},{0,-1.2149616789066986,-1.5201528669296132,-1.650949090368005,-1.5855509786488091,-1.3675572729181558,-1.323958531772025,-1.323958531772025,-1.3675572729181558,-0.7571748968723268,-0.10319377968036697,-0.40838496770328153,-0.713576155726196,-0.5173818205686082,-0.6481780440070001,-0.9315698614568493,-0.10319377968036697,0.6161854492307888,0.005803073184959645,-0.6699774145800654,-0.5173818205686082,-0.6045793028608695,-0.8225730085915227,-1.1713629377605679,-1.3675572729181558,0},{0,-0.6481780440070001,-1.4983534963565477,-1.5419522375026784,-1.3457579023450905,-0.9969679731760452,-0.36478622655715087,-1.1495635671875026,-0.7353755262992614,0.20199740834254756,0.3545930023540048,-0.23399000311875892,-0.8225730085915227,-0.7571748968723268,-0.6481780440070001,-0.844372379164588,-1.105964826041372,0.005803073184959645,0.24559614948867822,-0.40838496770328153,-0.9097704908837839,-0.9315698614568493,-0.778974267445392,-0.97516860260298,-1.2803597906258946,0},{0,0.005803073184959645,-1.323958531772025,-1.4111560140642865,-1.1277641966144372,0.7469816726691807,1.8805489424685775,1.1829690841304872,0.1583986671964169,0.7251823020961153,0.28919489063480885,-0.10319377968036697,-0.713576155726196,-0.713576155726196,-0.8879711203107187,-1.2803597906258946,-1.1713629377605679,0.005803073184959645,0.2237967789156129,0.049401814331090296,-0.4955824499955428,-0.8225730085915227,-0.7353755262992614,-0.7353755262992614,-0.8879711203107187,0},{0,0.2237967789156129,-1.3457579023450905,-1.323958531772025,-1.4111560140642865,1.4663609015803363,2.4909313185144066,1.6625552367379244,0.41999111407320083,0.9431760078267686,0.44179048464626614,-0.16859189139956296,-0.16859189139956296,-0.9315698614568493,-0.7571748968723268,-1.5637516080757436,-0.7571748968723268,0.9213766372537032,0.5507873375115927,0.5725867080846581,-0.43018433827634683,-0.7571748968723268,-0.3429868559840855,-0.713576155726196,-0.844372379164588,0},{0,0.5289879669385275,-1.1495635671875026,-1.2367610494797638,-1.4765541257834824,-0.6917767851531307,1.6625552367379244,1.1393703429843565,0.46358985521933144,0.8559785255345073,1.0303734901190298,-0.1249931502534323,-0.36478622655715087,-0.4955824499955428,-0.713576155726196,-1.6945478315141356,0.02760244375802497,1.7497527190301856,0.6597841903769194,0.3981917435001355,-0.6481780440070001,-0.8007736380184574,-0.5173818205686082,-0.3865855971302162,-0.6699774145800654,0},{0,0.46358985521933144,-0.9533692320299146,-1.2803597906258946,-1.4111560140642865,-1.4765541257834824,0.8777778961075726,0.3109942612078742,-0.3865855971302162,0.7905804138153113,1.5535583838725977,0.3763923729270702,-0.2993881148379549,-0.14679252082649763,-0.059595038534236325,-1.4111560140642865,0.6161854492307888,1.444561531007271,0.6161854492307888,-0.01599629738810568,-0.6263786734339347,-0.713576155726196,-0.6917767851531307,-0.5827799322878041,-0.6699774145800654,0},{0,-0.2993881148379549,-0.9969679731760452,-1.1713629377605679,-1.3457579023450905,-1.5855509786488091,0.18019803776948223,-0.19039126197262826,0.3327936317809395,0.9431760078267686,1.9241476836147082,0.9867747489728992,0.11479992605028627,-0.10319377968036697,-0.059595038534236325,-0.9533692320299146,0.7687810432422459,1.3573640487150098,0.5289879669385275,-0.16859189139956296,-0.6917767851531307,-0.778974267445392,-0.9097704908837839,-0.8661717497376533,-0.3865855971302162,0},{0,-0.059595038534236325,-0.97516860260298,-1.0841654554683067,-1.2367610494797638,-1.6945478315141356,-0.5173818205686082,-0.19039126197262826,1.2483671958496831,1.2483671958496831,1.0303734901190298,0.6161854492307888,0.4853892257923968,0.28919489063480885,-0.36478622655715087,-0.9097704908837839,0.8123797843883767,1.2701665664227484,0.3327936317809395,0.2237967789156129,-0.14679252082649763,-0.6263786734339347,-0.45198370884941214,-0.4737830794224775,-0.16859189139956296,0},{0,0.6597841903769194,-0.7571748968723268,-0.5173818205686082,-0.7571748968723268,-1.3021591611989598,-0.40838496770328153,0.09300055547722094,2.1639407599184266,2.578128800806668,0.5507873375115927,0.3981917435001355,0.005803073184959645,-0.23399000311875892,-0.36478622655715087,-0.8007736380184574,0.1365992966233516,0.7469816726691807,0.5725867080846581,-0.23399000311875892,-0.6917767851531307,-0.9533692320299146,-0.5391811911416735,-0.27758874426488955,-0.27758874426488955,0},{0,1.313765307568879,-0.4737830794224775,0.3109942612078742,0.02760244375802497,-0.6481780440070001,-1.6291497197949396,0.46358985521933144,0.9431760078267686,0.637984819803854,0.11479992605028627,-0.5173818205686082,-0.4737830794224775,-0.43018433827634683,-0.5391811911416735,-1.1713629377605679,-0.16859189139956296,-0.059595038534236325,0.3109942612078742,0.1365992966233516,-0.3211874854110202,-0.8661717497376533,-0.7571748968723268,-0.3865855971302162,-0.6481780440070001,0},{0,1.6189564955917937,-0.14679252082649763,-0.2121906325456936,0.7251823020961153,-0.01599629738810568,-1.105964826041372,-0.14679252082649763,-0.36478622655715087,-0.4955824499955428,-0.4955824499955428,-0.844372379164588,-0.2993881148379549,-0.5173818205686082,-0.36478622655715087,-0.2121906325456936,-1.040566714322176,-1.7381465726602663,-0.14679252082649763,0.07120118490415561,-1.105964826041372,-1.323958531772025,-1.2803597906258946,-1.0187673437491105,-0.7353755262992614,0},{0,1.6625552367379244,0.46358985521933144,-0.3429868559840855,0.6815835609499847,0.637984819803854,-0.01599629738810568,-0.6917767851531307,-1.2367610494797638,-0.08139440910730165,-0.3429868559840855,-0.25578937369182425,0.46358985521933144,-0.40838496770328153,-0.40838496770328153,0.18019803776948223,-0.40838496770328153,-0.43018433827634683,-0.5609805617147388,-1.1713629377605679,-1.3021591611989598,-1.5855509786488091,-1.1277641966144372,-1.5637516080757436,-1.1495635671875026,0},{0,1.575357754445663,0.8777778961075726,-0.27758874426488955,0.44179048464626614,0.3981917435001355,0.5071885963654621,0.3109942612078742,-1.323958531772025,-0.08139440910730165,-0.5609805617147388,0.24559614948867822,1.226567825276618,0.1365992966233516,-0.844372379164588,-0.19039126197262826,-0.14679252082649763,0.1365992966233516,-0.7353755262992614,-1.4765541257834824,-1.3457579023450905,-1.3021591611989598,-0.40838496770328153,-1.1277641966144372,-0.9533692320299146,0},{0,1.4881602721534017,1.0521728606920953,-0.01599629738810568,0.7469816726691807,1.5971571250187284,-0.01599629738810568,-0.5391811911416735,-0.844372379164588,-0.5609805617147388,0.09300055547722094,1.3355646781419444,1.4227621604342058,0.7905804138153113,-0.23399000311875892,-0.9969679731760452,-1.0623660848952412,-1.1931623083336331,-1.258560420052829,-1.323958531772025,-1.5419522375026784,-0.9315698614568493,-0.6263786734339347,-0.8007736380184574,-0.6481780440070001,0},{0,1.4663609015803363,0.7687810432422459,-0.45198370884941214,1.0303734901190298,3.014116212267974,2.4691319479413414,0.70338293152305,0.7687810432422459,1.1393703429843565,1.7497527190301856,2.098542648199231,1.8587495718955123,1.509959642726467,0.6815835609499847,-0.059595038534236325,-1.0841654554683067,-1.1713629377605679,-0.9533692320299146,-0.5391811911416735,-0.2121906325456936,-0.037795667961171,-0.01599629738810568,0.2237967789156129,0.1583986671964169,0},{0,1.5317590132995322,0.834179154961442,0.02760244375802497,2.120342018772296,2.948718100548778,3.057714953414105,2.6217275419527986,0.9867747489728992,0.8123797843883767,1.0957716018382258,0.9649753783998339,0.8777778961075726,0.7905804138153113,0.1583986671964169,-0.16859189139956296,-0.23399000311875892,-0.01599629738810568,-0.037795667961171,0.07120118490415561,0.28919489063480885,0.41999111407320083,0.3981917435001355,0.5071885963654621,0.637984819803854,0},{0,1.7497527190301856,1.3573640487150098,1.1393703429843565,2.7307243948181252,2.817921877110386,2.534530059660537,0.899577266680638,-0.01599629738810568,-0.14679252082649763,-0.14679252082649763,-0.10319377968036697,-0.23399000311875892,0.07120118490415561,0.18019803776948223,0.02760244375802497,0.09300055547722094,0.28919489063480885,0.28919489063480885,0.3109942612078742,0.3545930023540048,0.44179048464626614,0.5943860786577234,0.5507873375115927,0.5507873375115927,0},{0,1.7279533484571203,0.5507873375115927,1.509959642726467,2.8397212476834515,2.9051193594026476,1.379163419288075,0.3327936317809395,0.1365992966233516,0.1583986671964169,0.20199740834254756,0.18019803776948223,0.09300055547722094,0.11479992605028627,0.11479992605028627,0.07120118490415561,0.02760244375802497,0.18019803776948223,0.28919489063480885,0.28919489063480885,0.3981917435001355,0.4853892257923968,0.7251823020961153,0.6597841903769194,0.6597841903769194,0},{0,1.2047684547035524,0.6815835609499847,2.120342018772296,2.9923168416949086,2.0331445364800347,0.1365992966233516,0.3545930023540048,0.28919489063480885,0.3327936317809395,0.3327936317809395,0.20199740834254756,0.07120118490415561,0.02760244375802497,0.005803073184959645,0.02760244375802497,0.11479992605028627,0.24559614948867822,0.41999111407320083,0.4853892257923968,0.5725867080846581,0.834179154961442,0.8777778961075726,0.7687810432422459,0.8123797843883767,0},{0,0.3109942612078742,1.1393703429843565,2.665326283098929,2.948718100548778,0.899577266680638,0.049401814331090296,0.24559614948867822,0.41999111407320083,0.3763923729270702,0.1583986671964169,0.1583986671964169,0.1583986671964169,0.1583986671964169,0.1583986671964169,0.24559614948867822,0.3327936317809395,0.41999111407320083,0.637984819803854,0.834179154961442,0.9213766372537032,0.834179154961442,0.637984819803854,0.6161854492307888,0.5725867080846581,0},{0,0.3109942612078742,0.5725867080846581,2.643526912525864,2.665326283098929,0.6161854492307888,0.3109942612078742,0.3763923729270702,0.26739552006174355,0.46358985521933144,0.24559614948867822,0.09300055547722094,0.1583986671964169,0.2237967789156129,0.3109942612078742,0.3981917435001355,0.44179048464626614,0.6161854492307888,0.5725867080846581,0.5943860786577234,0.7905804138153113,0.7687810432422459,0.5943860786577234,0.46358985521933144,0.899577266680638,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}};


#endif