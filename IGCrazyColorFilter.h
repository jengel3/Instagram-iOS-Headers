
#import <Instagram/IGColorMapFilter.h>

@interface IGCrazyColorFilter : IGColorMapFilter
+(id)filterName;
+(int)filterType;
-(id)fragmentShader;
-(id)samplers;
@end

