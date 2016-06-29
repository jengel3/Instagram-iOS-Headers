

#import <Instagram/Instagram-Structs.h>
@interface IGQuickCamMediaHelper : NSObject
+(void)addShadowRect:(CGRect)arg1 toView:(id)arg2 ;
+(id)imageWithImage:(id)arg1 scaledToSize:(CGSize)arg2 ;
+(id)cropImage:(id)arg1 withRect:(CGRect)arg2 ;
+(char)CGRect:(CGRect)arg1 equalToCGRect:(CGRect)arg2 withEpsilon:(float)arg3 ;
+(char)CGFloat:(float)arg1 equalToCGFloat:(float)arg2 withEpsilon:(float)arg3 ;
+(void)setupOutputAsset:(id)arg1 withInputAsset:(id)arg2 cropRect:(CGRect)arg3 ;
+(CGRect)cropRectForOutputAsset:(id)arg1 withInputAsset:(id)arg2 fromCropView:(id)arg3 ;
+(void)addShadowForView:(id)arg1 ;
+(void)rotateAnimationOnView:(id)arg1 ;
+(void)stateAnimationBlock:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(void)layoutNuxWithLabel:(id)arg1 parentView:(id)arg2 ;
+(char)shouldDisplayFilterNux;
@end

