

@protocol IGEventViewerCellType;
@class IGPost, NSIndexPath, IGFeedItemMediaCell, IGEventViewerVideoCell, IGEventViewerPhotoCell;

@interface IGEventViewerPlaybackItem : NSObject {

	IGPost* _post;
	NSIndexPath* _indexPath;
	IGFeedItemMediaCell*<IGEventViewerCellType> _cell;

}

@property (nonatomic,readonly) IGPost * post;                                                 //@synthesize post=_post - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                       //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) IGFeedItemMediaCell*<IGEventViewerCellType> cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) IGEventViewerVideoCell * videoCell; 
@property (nonatomic,readonly) IGEventViewerPhotoCell * photoCell; 
-(IGPost *)post;
-(char)isValidVideoItem;
-(char)isValidPhotoItem;
-(IGEventViewerPhotoCell *)photoCell;
-(id)initWithPost:(id)arg1 indexPath:(id)arg2 cell:(id)arg3 ;
-(IGEventViewerVideoCell *)videoCell;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSIndexPath *)indexPath;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)cell;
@end

