

@class IGFeedItemVideoView, IGFeedItem, IGFeedItemPageCellState;

@interface IGPageCellIndicatorContext : NSObject {

	char _animated;
	IGFeedItemVideoView* _videoView;
	IGFeedItem* _feedItem;
	IGFeedItemPageCellState* _pageCellState;

}

@property (nonatomic,readonly) IGFeedItemVideoView * videoView;                      //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGFeedItemPageCellState * pageCellState;              //@synthesize pageCellState=_pageCellState - In the implementation block
@property (nonatomic,readonly) char animated;                                        //@synthesize animated=_animated - In the implementation block
-(IGFeedItem *)feedItem;
-(IGFeedItemPageCellState *)pageCellState;
-(id)initWithVideoView:(id)arg1 feedItem:(id)arg2 pageCellState:(id)arg3 animated:(char)arg4 ;
-(IGFeedItemVideoView *)videoView;
-(char)isEqual:(id)arg1 ;
-(char)animated;
@end

