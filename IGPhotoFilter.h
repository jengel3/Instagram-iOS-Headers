
#import <Instagram/IGImageFilter.h>

@class NSString, UIImage;

@interface IGPhotoFilter : IGImageFilter {

	NSString* _borderName;

}

@property (nonatomic,copy,readonly) NSString * borderName;              //@synthesize borderName=_borderName - In the implementation block
@property (nonatomic,readonly) UIImage * borderImage; 
-(id)strengthShaderCode;
-(NSString *)borderName;
-(id)dataForBundleTextureName:(id)arg1 ;
-(id)init;
-(id)dictionaryRepresentation;
-(UIImage *)borderImage;
@end

