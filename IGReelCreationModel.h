
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IGReelCreationModel : NSObject <NSCoding> {

	char _hasDrawing;
	NSString* _reelPK;
	NSString* _albumItemText;
	Class _filterClass;

}

@property (nonatomic,readonly) NSString * reelPK;                   //@synthesize reelPK=_reelPK - In the implementation block
@property (nonatomic,retain) NSString * albumItemText;              //@synthesize albumItemText=_albumItemText - In the implementation block
@property (assign,nonatomic) char hasDrawing;                       //@synthesize hasDrawing=_hasDrawing - In the implementation block
@property (nonatomic,retain) Class filterClass;                     //@synthesize filterClass=_filterClass - In the implementation block
+(id)creationModel;
-(Class)filterClass;
-(NSString *)albumItemText;
-(id)initWithReelPK:(id)arg1 albumItemText:(id)arg2 ;
-(void)setAlbumItemText:(NSString *)arg1 ;
-(void)setFilterClass:(Class)arg1 ;
-(char)hasDrawing;
-(void)setHasDrawing:(char)arg1 ;
-(NSString *)reelPK;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)debugDescription;
@end

