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

@interface IGLuxBlendFilter : IGImageFilter {

	float _luxBlendAmount;
	float _slope;
	IGSurface* _claheCDF;
	IGSurface* _antiLuxSurface;
	IGSurface* _starlightSurface;

}

@property (assign,nonatomic) float luxBlendAmount;                      //@synthesize luxBlendAmount=_luxBlendAmount - In the implementation block
@property (assign,nonatomic) float slope;                               //@synthesize slope=_slope - In the implementation block
@property (nonatomic,retain) IGSurface * claheCDF;                      //@synthesize claheCDF=_claheCDF - In the implementation block
@property (nonatomic,retain) IGSurface * antiLuxSurface;                //@synthesize antiLuxSurface=_antiLuxSurface - In the implementation block
@property (nonatomic,retain) IGSurface * starlightSurface;              //@synthesize starlightSurface=_starlightSurface - In the implementation block
-(void)setLuxBlendAmount:(float)arg1 ;
-(float)luxBlendAmount;
-(void)clearCachesNotOfSize:(CGSize)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentFunctions;
-(IGSurface *)antiLuxSurface;
-(void)setAntiLuxSurface:(IGSurface *)arg1 ;
-(IGSurface *)starlightSurface;
-(void)setStarlightSurface:(IGSurface *)arg1 ;
-(IGSurface *)claheCDF;
-(void)setClaheCDF:(IGSurface *)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 useInternalCaches:(char)arg3 ;
-(void)reduceMemoryUsage;
-(float)slope;
-(void)setSlope:(float)arg1 ;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearInternalCaches;
-(id)samplers;
@end

