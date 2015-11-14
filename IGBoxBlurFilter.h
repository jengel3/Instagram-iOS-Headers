/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:10 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGBoxBlurFilter : IGImageFilter {

	GLKVector2 _blurVector;
	IGSurface* _intermediateTexture;
	unsigned _kernelSize;

}

@property (nonatomic,readonly) unsigned kernelSize;              //@synthesize kernelSize=_kernelSize - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(id)initWithKernelSize:(unsigned)arg1 ;
-(unsigned)kernelSize;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

