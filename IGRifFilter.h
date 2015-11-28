
#import <Instagram/IGColorMapFilter.h>

@interface IGRifFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

