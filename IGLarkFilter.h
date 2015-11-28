
#import <Instagram/IGColorMapFilter.h>

@interface IGLarkFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

