
#import <libobjc.A.dylib/NSCoding.h>

@class IGFeedItem, NSString;

@interface IGAlbumCreationModel : NSObject <NSCoding> {

	IGFeedItem* _album;
	NSString* _albumTitle;
	NSString* _albumItemText;
	float _albumItemTextPosition;
	NSString* _clientAlbumPK;

}

@property (nonatomic,retain) NSString * clientAlbumPK;                   //@synthesize clientAlbumPK=_clientAlbumPK - In the implementation block
@property (nonatomic,readonly) IGFeedItem * album;                       //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) NSString * albumTitle;                    //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,readonly) NSString * albumItemText;                 //@synthesize albumItemText=_albumItemText - In the implementation block
@property (nonatomic,readonly) float albumItemTextPosition;              //@synthesize albumItemTextPosition=_albumItemTextPosition - In the implementation block
@property (nonatomic,readonly) NSString * clientOrServerPK; 
@property (nonatomic,readonly) NSString * pk; 
+(id)blankModel;
-(NSString *)pk;
-(NSString *)albumItemText;
-(float)albumItemTextPosition;
-(id)initWithAlbum:(id)arg1 clientAlbumPK:(id)arg2 albumTitle:(id)arg3 albumItemText:(id)arg4 albumItemTextPosition:(float)arg5 ;
-(id)initWithClientAlbumPK:(id)arg1 ;
-(NSString *)clientOrServerPK;
-(NSString *)clientAlbumPK;
-(void)setClientAlbumPK:(NSString *)arg1 ;
-(IGFeedItem *)album;
-(NSString *)albumTitle;
-(id)initWithAlbum:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
@end

