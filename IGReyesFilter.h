
#import <Instagram/IGColorMapFilter.h>

@interface IGReyesFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

