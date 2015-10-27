/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ALAssetsGroup, PHAssetCollection, NSArray, NSString, UIImage;

@interface IGAssetGroup : NSObject {

	ALAssetsGroup* _group;
	PHAssetCollection* _collection;
	NSArray* _allAssets;
	NSArray* _photos;
	NSArray* _videos;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) unsigned groupType; 
@property (nonatomic,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) NSString * name; 
-(id)assetsOfType:(int)arg1 ;
-(id)initWithAssetGroup:(id)arg1 ;
-(void)loadAssetsWithCompletion:(/*^block*/id)arg1 ;
-(int)assetCountForType:(int)arg1 ;
-(unsigned)groupType;
-(UIImage *)posterImage;
-(NSString *)name;
-(NSString *)uniqueID;
-(id)initWithAssetCollection:(id)arg1 ;
@end

