/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:16 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface, IGBilateralFilter;

@interface IGStructureFilter : IGImageFilter {

	IGSurface* _bilateralImage;
	char _needsConfigure;
	float _structureStrength;
	IGBilateralFilter* _bilateralFilter;

}

@property (assign,nonatomic) float structureStrength;                          //@synthesize structureStrength=_structureStrength - In the implementation block
@property (nonatomic,retain) IGBilateralFilter * bilateralFilter;              //@synthesize bilateralFilter=_bilateralFilter - In the implementation block
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(_GLKMatrix4)contentTransform;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(_GLKMatrix4)textureTransform;
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(float)structureStrength;
-(void)setStructureStrength:(float)arg1 ;
-(IGBilateralFilter *)bilateralFilter;
-(void)setBilateralFilter:(IGBilateralFilter *)arg1 ;
-(id)samplers;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

