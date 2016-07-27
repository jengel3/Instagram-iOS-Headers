
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface IGReelCreationModel : NSObject <NSCoding> {

	NSString* _reelPK;
	NSArray* _items;
	NSString* _albumItemText;
	float _albumItemTextPosition;

}

@property (nonatomic,readonly) NSString * reelPK;                      //@synthesize reelPK=_reelPK - In the implementation block
@property (nonatomic,retain) NSArray * items;                          //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * albumItemText;                 //@synthesize albumItemText=_albumItemText - In the implementation block
@property (assign,nonatomic) float albumItemTextPosition;              //@synthesize albumItemTextPosition=_albumItemTextPosition - In the implementation block
+(id)creationModel;
-(NSString *)albumItemText;
-(id)initWithReelPK:(id)arg1 items:(id)arg2 albumItemText:(id)arg3 albumItemTextPosition:(float)arg4 ;
-(float)albumItemTextPosition;
-(void)removeObserversFromAlbumItems:(id)arg1 ;
-(void)addObserversToAlbumItems:(id)arg1 ;
-(void)feedItemWasDeleted:(id)arg1 ;
-(void)feedItemDidChange:(id)arg1 ;
-(void)setAlbumItemText:(NSString *)arg1 ;
-(void)setAlbumItemTextPosition:(float)arg1 ;
-(NSString *)reelPK;
-(void)deleteFeedItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)debugDescription;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

