/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBDialogsParams.h>

@protocol FBOpenGraphAction;
@class NSString, FBAppBridgeScheme;

@interface FBOpenGraphActionParams : FBDialogsParams {

	id<FBOpenGraphAction> _action;
	NSString* _previewPropertyName;
	NSString* _actionType;
	FBAppBridgeScheme* _bridgeScheme;

}

@property (nonatomic,retain) id<FBOpenGraphAction> action;                  //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * previewPropertyName;                  //@synthesize previewPropertyName=_previewPropertyName - In the implementation block
@property (nonatomic,copy) NSString * actionType;                           //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) FBAppBridgeScheme * bridgeScheme;              //@synthesize bridgeScheme=_bridgeScheme - In the implementation block
+(id)getPostedObjectTypeFromObject:(id)arg1 ;
+(id)getIdOrUrlFromObject:(id)arg1 ;
+(id)methodName;
-(void)setPreviewPropertyName:(NSString *)arg1 ;
-(NSString *)previewPropertyName;
-(FBAppBridgeScheme *)bridgeScheme;
-(id)flattenObject:(id)arg1 ;
-(id)flattenGraphObjects:(id)arg1 ;
-(char)containsUIImages:(id)arg1 ;
-(id)initWithAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3 ;
-(id)dictionaryMethodArgs;
-(void)setBridgeScheme:(FBAppBridgeScheme *)arg1 ;
-(NSString *)actionType;
-(void)dealloc;
-(id<FBOpenGraphAction>)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id<FBOpenGraphAction>)arg1 ;
-(id)validate;
-(void)setActionType:(NSString *)arg1 ;
@end

