/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:09 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface, IGGaussianBlurFilter;

@interface IGSharpenFilter : IGImageFilter {

	IGSurface* _blurredImage;
	IGGaussianBlurFilter* _blurFilter;

}

@property (assign,nonatomic) float sigma; 
@property (assign,nonatomic) unsigned kernelSize; 
@property (nonatomic,retain) IGGaussianBlurFilter * blurFilter;              //@synthesize blurFilter=_blurFilter - In the implementation block
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)strengthShaderCode;
-(unsigned)kernelSize;
-(void)setKernelSize:(unsigned)arg1 ;
-(IGGaussianBlurFilter *)blurFilter;
-(void)setBlurFilter:(IGGaussianBlurFilter *)arg1 ;
-(id)samplers;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)sigma;
-(void)setSigma:(float)arg1 ;
@end

