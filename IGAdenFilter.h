
#import <Instagram/IGColorMapFilter.h>

@interface IGAdenFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

