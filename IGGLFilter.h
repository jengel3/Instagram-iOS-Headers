/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:09 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFilter.h>

@class IGContext, NSBundle;

@interface IGGLFilter : IGFilter {

	IGContext* _context;
	NSBundle* _assetBundle;

}

@property (nonatomic,retain) NSBundle * assetBundle;              //@synthesize assetBundle=_assetBundle - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(id)textureWithContentsOfData:(id)arg1 ;
-(id)programForContext:(id)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)shaderConstsForSplineSamplers;
-(NSBundle *)assetBundle;
-(void)setAssetBundle:(NSBundle *)arg1 ;
-(id)textureNamed:(id)arg1 ;
-(id)init;
-(id)samplers;
@end

