
#import <Instagram/IGColorMapFilter.h>

@interface IGSlumberFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

