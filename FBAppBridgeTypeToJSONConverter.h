/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBAppBridgeTypeToJSONConverter : NSObject {

	NSMutableArray* _createdPasteboardNames;

}

@property (nonatomic,retain) NSMutableArray * createdPasteboardNames;              //@synthesize createdPasteboardNames=_createdPasteboardNames - In the implementation block
+(id)appBridgeTypeFromJSON:(id)arg1 ;
-(NSMutableArray *)createdPasteboardNames;
-(id)jsonDictionaryFromDictionaryWithAppBridgeTypes:(id)arg1 ;
-(id)dictionaryWithAppBridgeTypesFromJSONDictionary:(id)arg1 ;
-(void)setCreatedPasteboardNames:(NSMutableArray *)arg1 ;
-(id)convertedDictionaryFromDictionary:(id)arg1 convertingToJSON:(char)arg2 ;
-(id)convertedArrayFromArray:(id)arg1 convertingToJSON:(char)arg2 ;
-(id)jsonFromData:(id)arg1 tag:(id)arg2 ;
-(id)convertedObjectFromObject:(id)arg1 convertingToJSON:(char)arg2 ;
-(void)dealloc;
@end

