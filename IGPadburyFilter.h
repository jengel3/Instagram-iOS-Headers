
#import <Instagram/IGColorMapFilter.h>

@interface IGPadburyFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

