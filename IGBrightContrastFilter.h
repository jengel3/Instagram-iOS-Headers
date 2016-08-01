
#import <Instagram/IGColorMapFilter.h>

@interface IGBrightContrastFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

