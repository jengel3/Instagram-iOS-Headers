
#import <Instagram/IGColorMapFilter.h>

@interface IGJunoFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

