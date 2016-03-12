
#import <Instagram/IGColorMapFilter.h>

@interface IGEmpireFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

