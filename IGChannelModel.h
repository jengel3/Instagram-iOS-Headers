
#import <Instagram/IGDKDiffable.h>

@class NSString, IGFeedItem;

@interface IGChannelModel : NSObject <IGDKDiffable> {

	NSString* _channelId;
	unsigned _channelType;
	NSString* _header;
	NSString* _title;
	IGFeedItem* _post;

}

@property (nonatomic,readonly) NSString * channelId;                //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,readonly) unsigned channelType;                //@synthesize channelType=_channelType - In the implementation block
@property (nonatomic,readonly) NSString * header;                   //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) IGFeedItem * post;                     //@synthesize post=_post - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)post;
-(void)setPost:(IGFeedItem *)arg1 ;
-(id)diffIdentifier;
-(unsigned)channelType;
-(id)initWithChannelId:(id)arg1 channelType:(unsigned)arg2 header:(id)arg3 title:(id)arg4 feedItem:(id)arg5 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)header;
-(NSString *)channelId;
@end

