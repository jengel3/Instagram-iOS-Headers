

@class IGLocation, NSString, IGUsertagGroup, IGFeedItem;

@interface IGEditedPost : NSObject {

	IGLocation* _location;
	NSString* _caption;
	IGUsertagGroup* _usertags;
	IGFeedItem* _feedItem;

}

@property (nonatomic,retain) IGLocation * location;                  //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * caption;                     //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) IGUsertagGroup * usertags;              //@synthesize usertags=_usertags - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                  //@synthesize feedItem=_feedItem - In the implementation block
-(id)pk;
-(IGUsertagGroup *)usertags;
-(id)initWithFeedItem:(id)arg1 ;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(char)hasChangedCaption;
-(char)hasChangedLocation;
-(char)hasChangedUsertags;
-(char)hasChanged;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(id)requestParameters;
@end

