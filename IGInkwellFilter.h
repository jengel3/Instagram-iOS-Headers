
#import <Instagram/IGPhotoFilter.h>

@interface IGInkwellFilter : IGPhotoFilter
+(id)filterName;
+(int)filterType;
-(id)strengthShaderCode;
-(id)borderName;
-(id)fragmentShader;
-(id)samplers;
@end

