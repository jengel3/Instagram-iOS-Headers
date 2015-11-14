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

@interface IGStarlightFilter : IGImageFilter {

	IGSurface* _claheCDF;
	float _filterStrength;

}

@property (nonatomic,retain) IGSurface * claheCDF;              //@synthesize claheCDF=_claheCDF - In the implementation block
@property (assign,nonatomic) float filterStrength;              //@synthesize filterStrength=_filterStrength - In the implementation block
+(int)numColumns;
+(id)cdfForPixelBuffer:(CVBufferRef)arg1 slope:(float)arg2 ;
-(float)filterStrength;
-(void)setFilterStrength:(float)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentFunctions;
-(IGSurface *)claheCDF;
-(void)setClaheCDF:(IGSurface *)arg1 ;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)samplers;
@end

