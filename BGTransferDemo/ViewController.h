//
//  ViewController.h
//  BGTransferDemo
//
//  Created by dev on 12/26/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource, NSURLSessionDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblFiles;
- (IBAction)startOrPauseDownloadingSingleFile:(id)sender;
- (IBAction)stopDownloading:(id)sender;
- (IBAction)startAllDownloads:(id)sender;
- (IBAction)stopAllDownloads:(id)sender;

- (IBAction)initializeAll:(id)sender;

-(int)getFileDownloadInfoIndexWithTaskIdentifier:(unsigned long)taskIdentifier;

@end

