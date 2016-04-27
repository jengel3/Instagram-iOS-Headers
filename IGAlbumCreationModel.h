

@class IGFeedItem, NSString;

@interface IGAlbumCreationModel : NSObject {

	IGFeedItem* _currentAlbum;
	NSString* _currentAlbumTitle;
	NSString* _currentAlbumItemText;
	float _currentAlbumItemTextPosition;

}

@property (nonatomic,readonly) IGFeedItem * currentAlbum;                       //@synthesize currentAlbum=_currentAlbum - In the implementation block
@property (nonatomic,readonly) NSString * currentAlbumTitle;                    //@synthesize currentAlbumTitle=_currentAlbumTitle - In the implementation block
@property (nonatomic,readonly) NSString * currentAlbumItemText;                 //@synthesize currentAlbumItemText=_currentAlbumItemText - In the implementation block
@property (nonatomic,readonly) float currentAlbumItemTextPosition;              //@synthesize currentAlbumItemTextPosition=_currentAlbumItemTextPosition - In the implementation block
+(id)blankModel;
-(id)initWithCurrentAlbum:(id)arg1 currentAlbumTitle:(id)arg2 currentAlbumItemText:(id)arg3 currentAlbumItemTextPosition:(float)arg4 ;
-(IGFeedItem *)currentAlbum;
-(NSString *)currentAlbumItemText;
-(float)currentAlbumItemTextPosition;
-(id)initWithCurrentAlbum:(id)arg1 ;
-(NSString *)currentAlbumTitle;
@end

