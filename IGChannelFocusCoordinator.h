

@class IGChannelModel, IGFeedItem;

@interface IGChannelFocusCoordinator : NSObject {

	IGChannelModel* _channel;
	IGFeedItem* _post;
	float _videoStartTime;

}

@property (nonatomic,retain) IGChannelModel * channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) IGFeedItem * post;                     //@synthesize post=_post - In the implementation block
@property (assign,nonatomic) float videoStartTime;                  //@synthesize videoStartTime=_videoStartTime - In the implementation block
-(void)setPost:(IGFeedItem *)arg1 ;
-(IGFeedItem *)post;
-(void)setVideoStartTime:(float)arg1 ;
-(float)videoStartTime;
-(void)reset;
-(void)setChannel:(IGChannelModel *)arg1 ;
-(IGChannelModel *)channel;
@end

