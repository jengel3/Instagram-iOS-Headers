/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:57 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGTapButton.h>
#import <Instagram/IGSponsorableButton.h>
#import <Instagram/IGActionSheetDelegate.h>

@protocol IGFeedItemLoggingProviderDelegate;
@class IGFeedItem, NSMutableDictionary, NSString;

@interface IGSponsoredButtonConcrete : IGTapButton <IGSponsorableButton, IGActionSheetDelegate> {

	char _showIcon;
	IGFeedItem* _feedItem;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	NSMutableDictionary* _tintedColors;

}

@property (nonatomic,retain) NSMutableDictionary * tintedColors;                                        //@synthesize tintedColors=_tintedColors - In the implementation block
@property (assign,nonatomic) char showIcon;                                                             //@synthesize showIcon=_showIcon - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)setColor:(id)arg1 forState:(unsigned)arg2 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)updateAppearance;
-(void)onSponsoredPostLabelTapped;
-(void)setTintedColors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)tintedColors;
-(id)init;
-(char)showIcon;
-(void)setShowIcon:(char)arg1 ;
@end

