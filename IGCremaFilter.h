
#import <Instagram/IGColorMapFilter.h>

@interface IGCremaFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

