
#import <Instagram/IGColorMapFilter.h>

@interface IGPortseaFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

