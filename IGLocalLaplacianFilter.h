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

@interface IGLocalLaplacianFilter : IGImageFilter {

	IGSurface* _localLaplacianMask;
	float _filterStrength;

}

@property (nonatomic,retain) IGSurface * localLaplacianMask;              //@synthesize localLaplacianMask=_localLaplacianMask - In the implementation block
@property (assign,nonatomic) float filterStrength;                        //@synthesize filterStrength=_filterStrength - In the implementation block
+(id)localLaplacianMaskForImage:(CVBufferRef)arg1 levels:(int)arg2 alpha:(float)arg3 beta:(float)arg4 applyToLuma:(char)arg5 ;
+(id)localLaplacianMaskForImage:(CVBufferRef)arg1 ;
-(float)filterStrength;
-(void)setFilterStrength:(float)arg1 ;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(void)setLocalLaplacianMask:(IGSurface *)arg1 ;
-(IGSurface *)localLaplacianMask;
-(id)fragmentShader;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)samplers;
@end

