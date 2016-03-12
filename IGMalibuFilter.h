
#import <Instagram/IGColorMapFilter.h>

@interface IGMalibuFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

