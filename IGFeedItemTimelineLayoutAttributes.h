/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:50 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGFeedItem, NSArray;

@interface IGFeedItemTimelineLayoutAttributes : NSObject {

	char _sponsoredContext;
	char _showExploreContext;
	char _showTimeStampOnFirstLayoutElement;
	IGFeedItem* _feedItem;
	NSArray* _rowItems;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                               //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic) char sponsoredContext;                               //@synthesize sponsoredContext=_sponsoredContext - In the implementation block
@property (assign,nonatomic) char showExploreContext;                             //@synthesize showExploreContext=_showExploreContext - In the implementation block
@property (assign,nonatomic) char showTimeStampOnFirstLayoutElement;              //@synthesize showTimeStampOnFirstLayoutElement=_showTimeStampOnFirstLayoutElement - In the implementation block
@property (nonatomic,retain) NSArray * rowItems;                                  //@synthesize rowItems=_rowItems - In the implementation block
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setSponsoredContext:(char)arg1 ;
-(void)setShowExploreContext:(char)arg1 ;
-(void)setShowTimeStampOnFirstLayoutElement:(char)arg1 ;
-(IGFeedItem *)feedItem;
-(char)sponsoredContext;
-(char)showTimeStampOnFirstLayoutElement;
-(char)showExploreContext;
-(id)initWithFeedItem:(id)arg1 sponsoredContext:(char)arg2 showExploreContext:(char)arg3 showTimeStampOnFirstLayoutElement:(char)arg4 ;
-(int)numberOfTextRowsInTimeline;
-(int)cellTypeForTextTimelineRow:(int)arg1 ;
-(id)commentForTextTimelineRow:(int)arg1 ;
-(void)setRowItems:(NSArray *)arg1 ;
-(NSArray *)rowItems;
@end

