
#import <Instagram/IGColorMapFilter.h>

@interface IGPerpetuaFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

