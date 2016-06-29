

@class NSString, IGFeedItem, UIColor, NSURL;

@interface IGAlbumCreationViewModel : NSObject {

	NSString* _currentAlbumTitle;
	float _currentAlbumItemTextPosition;
	IGFeedItem* _currentAlbum;
	NSString* _currentAlbumItemText;

}

@property (nonatomic,readonly) IGFeedItem * currentAlbum;                       //@synthesize currentAlbum=_currentAlbum - In the implementation block
@property (nonatomic,readonly) NSString * currentAlbumTitle;                    //@synthesize currentAlbumTitle=_currentAlbumTitle - In the implementation block
@property (nonatomic,readonly) NSString * currentAlbumItemText;                 //@synthesize currentAlbumItemText=_currentAlbumItemText - In the implementation block
@property (nonatomic,readonly) float currentAlbumItemTextPosition;              //@synthesize currentAlbumItemTextPosition=_currentAlbumItemTextPosition - In the implementation block
@property (nonatomic,readonly) UIColor * currentAlbumTitleColor; 
@property (nonatomic,readonly) NSURL * currentAlbumImageURL; 
@property (nonatomic,readonly) unsigned currentAlbumSize; 
@property (nonatomic,readonly) char showChangeTitleButton; 
-(IGFeedItem *)currentAlbum;
-(NSString *)currentAlbumItemText;
-(float)currentAlbumItemTextPosition;
-(UIColor *)currentAlbumTitleColor;
-(NSURL *)currentAlbumImageURL;
-(unsigned)currentAlbumSize;
-(char)showChangeTitleButton;
-(NSString *)currentAlbumTitle;
-(id)initWithModel:(id)arg1 ;
@end

