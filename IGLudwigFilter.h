
#import <Instagram/IGColorMapFilter.h>

@interface IGLudwigFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

