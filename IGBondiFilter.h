
#import <Instagram/IGColorMapFilter.h>

@interface IGBondiFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

