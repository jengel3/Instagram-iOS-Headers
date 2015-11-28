
#import <Instagram/IGColorMapFilter.h>

@interface IGRosaFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

