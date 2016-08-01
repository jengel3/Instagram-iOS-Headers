
#import <Instagram/Instagram-Structs.h>
#import <QuartzCore/CAGradientLayer.h>

@interface IGAppColorGradientLayer : CAGradientLayer
+(id)gradientLocations;
+(CGPoint)endPoint;
+(id)layer;
+(CGPoint)startPoint;
+(id)gradientColors;
@end

