
#import <Instagram/IGColorMapFilter.h>

@interface IGSubtleColorFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

