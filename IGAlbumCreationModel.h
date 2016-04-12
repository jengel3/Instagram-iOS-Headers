

@class IGFeedItem, NSString;

@interface IGAlbumCreationModel : NSObject {

	IGFeedItem* _currentAlbum;
	NSString* _currentAlbumTitle;

}

@property (nonatomic,readonly) IGFeedItem * currentAlbum;                 //@synthesize currentAlbum=_currentAlbum - In the implementation block
@property (nonatomic,readonly) NSString * currentAlbumTitle;              //@synthesize currentAlbumTitle=_currentAlbumTitle - In the implementation block
+(id)blankModel;
-(NSString *)currentAlbumTitle;
-(id)initWithCurrentAlbum:(id)arg1 ;
-(IGFeedItem *)currentAlbum;
-(id)initWithCurrentAlbum:(id)arg1 currentAlbumTitle:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
@end

