/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFeedHeaderItem.h>

@class IGLocation, IGUser, IGSponsoredPostInfo, IGDate, CLLocation, NSString, IGUsertagGroup, IGFeedItem;

@interface IGEditedPost : NSObject <IGFeedHeaderItem> {

	IGLocation* _location;
	NSString* _caption;
	IGUsertagGroup* _usertags;
	IGFeedItem* _feedItem;

}

@property (retain) IGLocation * location;                                  //@synthesize location=_location - In the implementation block
@property (retain) NSString * caption;                                     //@synthesize caption=_caption - In the implementation block
@property (retain) IGUsertagGroup * usertags;                              //@synthesize usertags=_usertags - In the implementation block
@property (readonly) int mediaType; 
@property (assign,nonatomic) char needsFetch; 
@property (nonatomic,retain) IGFeedItem * feedItem;                        //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) IGUser * user; 
@property (readonly) IGSponsoredPostInfo * sponsoredPostInfo; 
@property (readonly) IGDate * takenAt; 
@property (readonly) CLLocation * mediaCoord; 
-(id)pk;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(IGSponsoredPostInfo *)sponsoredPostInfo;
-(IGUsertagGroup *)usertags;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(char)needsFetch;
-(IGDate *)takenAt;
-(CLLocation *)mediaCoord;
-(id)initWithFeedItem:(id)arg1 ;
-(void)setNeedsFetch:(char)arg1 ;
-(char)hasChangedCaption;
-(char)hasChangedLocation;
-(char)hasChangedUsertags;
-(char)hasChanged;
-(IGUser *)user;
-(int)mediaType;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(id)requestParameters;
@end

