/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UITableViewDelegate.h>

@class IGSponsoredFeedItemHideHandler, UITableView, NSMutableDictionary, NSString;

@interface IGFeedItemHiddenNoReasonSelectedCell : UICollectionViewCell <UITableViewDelegate> {

	IGSponsoredFeedItemHideHandler* _hideHandler;
	UITableView* _tableView;
	NSMutableDictionary* _headersCache;

}

@property (nonatomic,retain) IGSponsoredFeedItemHideHandler * hideHandler;              //@synthesize hideHandler=_hideHandler - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headersCache;                      //@synthesize headersCache=_headersCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForFeedItem:(id)arg1 ;
-(void)configureForHideHandler:(id)arg1 ;
-(void)setHideHandler:(IGSponsoredFeedItemHideHandler *)arg1 ;
-(IGSponsoredFeedItemHideHandler *)hideHandler;
-(NSMutableDictionary *)headersCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)prepareForReuse;
@end
