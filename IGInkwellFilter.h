
#import <Instagram/IGPhotoFilter.h>

@interface IGInkwellFilter : IGPhotoFilter
+(id)filterName;
+(int)filterType;
-(id)borderName;
-(id)strengthShaderCode;
-(id)fragmentShader;
-(id)samplers;
@end

