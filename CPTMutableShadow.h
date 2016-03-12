
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTShadow.h>

@class CPTColor;

@interface CPTMutableShadow : CPTShadow

@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) float shadowBlurRadius; 
@property (nonatomic,retain) CPTColor * shadowColor; 
@end

